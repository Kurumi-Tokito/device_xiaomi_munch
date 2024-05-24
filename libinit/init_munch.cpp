/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t munch_in_info = {
    .hwc_value = "INDIA",
    .sku_value = "",

    .brand = "POCO",
    .device = "munch",
    .marketname = "POCO F4",
    .model = "22021211RI",
    .build_fingerprint = "POCO/munch_in/munch:14/UKQ1.231207.002/V816.0.1.0.ULMMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t munch_global_info = {
    .hwc_value = "GLOBAL",
    .sku_value = "",

    .brand = "POCO",
    .device = "munch",
    .marketname = "POCO F4",
    .model = "22021211RG",
    .build_fingerprint = "POCO/munch_global/munch:14/UKQ1.231207.002/V816.0.1.0.ULMMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t munch_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "munch",
    .marketname = "Redmi K40S",
    .model = "22021211RC",
    .build_fingerprint = "Redmi/munch/munch:14/UKQ1.231207.002/V816.0.1.0.ULMMIXM:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    munch_in_info,
    munch_global_info,
    munch_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
