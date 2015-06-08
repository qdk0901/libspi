LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)


LOCAL_SRC_FILES:= \
	libspi.c

LOCAL_MODULE:= libspi
LOCAL_MODULE_TAGS := optional

include $(BUILD_SHARED_LIBRARY)
