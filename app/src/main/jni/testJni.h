//
// Created by ovyalov on 8/5/15.
//

#ifndef HELLOJNITEST_TESTJNI_H
#define HELLOJNITEST_TESTJNI_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL
Java_com_example_ajindal_hellojnitest_MainActivity_getText(JNIEnv *env, jclass type);

#ifdef __cplusplus
}
#endif

#endif //HELLOJNITEST_TESTJNI_H_H
