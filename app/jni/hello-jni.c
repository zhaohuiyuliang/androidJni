#include <jni.h>
#include "android/log.h"

JNIEXPORT jstring JNICALL Java_com_ndkdemo_JniUtils_getString
  (JNIEnv *env, jobject instance){

return (*env)->NewStringUTF(env, "Hello jni!");

}

