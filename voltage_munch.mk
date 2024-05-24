#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common Voltage stuff.
$(call inherit-product, vendor/voltage/config/common_full_phone.mk)

# Inherit from device makefile
$(call inherit-product, device/xiaomi/munch/device.mk)


# Voltage Build Status
VOLTAGE_BUILD_TYPE := UNOFFICIAL

# Bootanimation Resolution
TARGET_BOOT_ANIMATION_RES := 2160

PRODUCT_NAME := voltage_munch
PRODUCT_DEVICE := munch
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := POCO
PRODUCT_MODEL := POCO F4

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi

BUILD_FINGERPRINT := Redmi/munch/munch:14/UKQ1.231207.002/V816.0.1.0.ULMMIXM:user/release-keys
