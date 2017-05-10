/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mining_mmedia_mmedia */

#ifndef _Included_com_mining_mmedia_mmedia
#define _Included_com_mining_mmedia_mmedia
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mining_mmedia_mmedia
 * Method:    media_module_create
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_mining_mmedia_mmedia_media_1module_1create
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_mining_mmedia_mmedia
 * Method:    media_module_destroy
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_mining_mmedia_mmedia_media_1module_1destroy
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mining_mmedia_mmedia
 * Method:    media_factory_create
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_mining_mmedia_mmedia_media_1factory_1create
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_mining_mmedia_mmedia
 * Method:    media_factory_destroy
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_mining_mmedia_mmedia_media_1factory_1destroy
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mining_mmedia_mmedia
 * Method:    media_search_channel_class
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_mining_mmedia_mmedia_media_1search_1channel_1class
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_mining_mmedia_mmedia
 * Method:    media_channel_create
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_mining_mmedia_mmedia_media_1channel_1create
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_mining_mmedia_mmedia
 * Method:    media_channel_destroy
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_mining_mmedia_mmedia_media_1channel_1destroy
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_mining_mmedia_mmedia
 * Method:    media_channel_ctrl
 * Signature: (ILjava/lang/String;Ljava/lang/String;[B)I
 */
JNIEXPORT jint JNICALL Java_com_mining_mmedia_mmedia_media_1channel_1ctrl
  (JNIEnv *, jobject, jint, jstring, jstring, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif