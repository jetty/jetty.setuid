/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_eclipse_jetty_setuid_SetUID */

#ifndef _Included_org_eclipse_jetty_setuid_SetUID
#define _Included_org_eclipse_jetty_setuid_SetUID
#ifdef __cplusplus
extern "C" {
#endif
#undef org_eclipse_jetty_setuid_SetUID_OK
#define org_eclipse_jetty_setuid_SetUID_OK 0L
#undef org_eclipse_jetty_setuid_SetUID_ERROR
#define org_eclipse_jetty_setuid_SetUID_ERROR -1L
/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    setumask
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_jetty_setuid_SetUID_setumask
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    setuid
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_jetty_setuid_SetUID_setuid
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    setgid
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_jetty_setuid_SetUID_setgid
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    cleargroups
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_jetty_setuid_SetUID_cleargroups
  (JNIEnv *, jclass);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    getpwnam
 * Signature: (Ljava/lang/String;)Lorg/eclipse/jetty/setuid/Passwd;
 */
JNIEXPORT jobject JNICALL Java_org_eclipse_jetty_setuid_SetUID_getpwnam
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    getpwuid
 * Signature: (I)Lorg/eclipse/jetty/setuid/Passwd;
 */
JNIEXPORT jobject JNICALL Java_org_eclipse_jetty_setuid_SetUID_getpwuid
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    getgrnam
 * Signature: (Ljava/lang/String;)Lorg/eclipse/jetty/setuid/Group;
 */
JNIEXPORT jobject JNICALL Java_org_eclipse_jetty_setuid_SetUID_getgrnam
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    getgrgid
 * Signature: (I)Lorg/eclipse/jetty/setuid/Group;
 */
JNIEXPORT jobject JNICALL Java_org_eclipse_jetty_setuid_SetUID_getgrgid
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    getrlimitnofiles
 * Signature: ()Lorg/eclipse/jetty/setuid/RLimit;
 */
JNIEXPORT jobject JNICALL Java_org_eclipse_jetty_setuid_SetUID_getrlimitnofiles
  (JNIEnv *, jclass);

/*
 * Class:     org_eclipse_jetty_setuid_SetUID
 * Method:    setrlimitnofiles
 * Signature: (Lorg/eclipse/jetty/setuid/RLimit;)I
 */
JNIEXPORT jint JNICALL Java_org_eclipse_jetty_setuid_SetUID_setrlimitnofiles
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif