#include "testJni.h"

JNIEXPORT jstring JNICALL
Java_com_example_ajindal_hellojnitest_MainActivity_getText(JNIEnv *env, jclass type) {

    // TODO
    return env->NewStringUTF("Hello Test Jni ");
}
