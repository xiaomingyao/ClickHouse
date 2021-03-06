#include <Dictionaries/CacheDictionary.h>
#include <Dictionaries/CacheDictionary.inc.h>

namespace DB
{
#define DEFINE(TYPE) \
    void CacheDictionary::get##TYPE( \
        const std::string & attribute_name, const PaddedPODArray<Key> & ids, const TYPE def, ResultArrayType<TYPE> & out) const \
    { \
        auto & attribute = getAttribute(attribute_name); \
        checkAttributeType(name, attribute_name, attribute.type, AttributeUnderlyingType::ut##TYPE); \
        getItemsNumberImpl<TYPE, TYPE>(attribute, ids, out, [&](const size_t) { return def; }); \
    }

DEFINE(UInt8)
DEFINE(UInt16)
DEFINE(UInt32)
DEFINE(UInt64)
DEFINE(UInt128)
DEFINE(Int8)
DEFINE(Int16)
DEFINE(Int32)
DEFINE(Int64)
DEFINE(Float32)
DEFINE(Float64)
DEFINE(Decimal32)
DEFINE(Decimal64)
DEFINE(Decimal128)

#undef DEFINE
}
