---
machine_translated: true
machine_translated_rev: 72537a2d527c63c07aa5d2361a8829f3895cf2bd
toc_priority: 44
toc_title: "\u062D\u0627\u0641\u0638\u0647"
---

# حافظه {#memory}

موتور حافظه ذخیره داده ها در رم, در شکل غیر فشرده. داده ها دقیقا به همان شکل ذخیره می شوند که هنگام خواندن دریافت می شود. به عبارت دیگر, خواندن از این جدول کاملا رایگان است.
همزمان دسترسی به داده ها هماهنگ شده است. قفل کوتاه هستند: خواندن و نوشتن عملیات یکدیگر را مسدود نمی کند.
شاخص پشتیبانی نمی شوند. خواندن موازی است.
بهره وری حداکثر (بر فراز 10 گیگابایت/ثانیه) در نمایش داده شد ساده رسیده, چرا که هیچ خواندن از دیسک وجود دارد, از حالت فشرده خارج, و یا کسب اطلاعات. (ما باید توجه داشته باشید که در بسیاری از موارد بهره وری موتور ادغام تقریبا به عنوان بالا است.)
هنگام راه اندازی مجدد یک سرور, داده ها از بین می رود از جدول و جدول خالی می شود.
به طور معمول, با استفاده از این موتور جدول توجیه نیست. اما, این می تواند مورد استفاده قرار گیرد برای تست, و برای کارهایی که حداکثر سرعت مورد نیاز است در تعداد نسبتا کمی از ردیف (تا حدود 100,000,000).

موتور حافظه توسط سیستم برای جداول موقت با داده های پرس و جو خارجی استفاده می شود (بخش را ببینید “External data for processing a query”) , و برای اجرای جهانی در (نگاه کنید به بخش “IN operators”).

[مقاله اصلی](https://clickhouse.tech/docs/en/operations/table_engines/memory/) <!--hide-->
