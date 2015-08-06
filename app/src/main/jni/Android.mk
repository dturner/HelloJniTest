LOCAL_PATH := /usr/local/google/home/ovyalov/projects/lldb/test/testJni/HelloJniTest/app/src/main/jni

include $(CLEAR_VARS)
LOCAL_MODULE := testJni

LOCAL_SRC_FILES := $(LOCAL_PATH)/../src/JniWrapper.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../src

LOCAL_LDLIBS := -lGLESv2 -llog

include $(BUILD_SHARED_LIBRARY)