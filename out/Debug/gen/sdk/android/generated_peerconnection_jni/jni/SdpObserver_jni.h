// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/SdpObserver

#ifndef org_webrtc_SdpObserver_JNI
#define org_webrtc_SdpObserver_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"

// Step 1: forward declarations.
JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_SdpObserver[];
const char kClassPath_org_webrtc_SdpObserver[] = "org/webrtc/SdpObserver";

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_webrtc_SdpObserver_clazz
    = 0;
#ifndef org_webrtc_SdpObserver_clazz_defined
#define org_webrtc_SdpObserver_clazz_defined
inline jclass org_webrtc_SdpObserver_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_SdpObserver,
      &g_org_webrtc_SdpObserver_clazz);
}
#endif

// Step 2: method stubs.

static base::subtle::AtomicWord g_org_webrtc_SdpObserver_onCreateSuccess = 0;
static void Java_SdpObserver_onCreateSuccess(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    sdp) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_SdpObserver_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_webrtc_SdpObserver_clazz(env),
      "onCreateSuccess",
"("
"Lorg/webrtc/SessionDescription;"
")"
"V",
      &g_org_webrtc_SdpObserver_onCreateSuccess);

     env->CallVoidMethod(obj.obj(),
          method_id, sdp.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_webrtc_SdpObserver_onSetSuccess = 0;
static void Java_SdpObserver_onSetSuccess(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_SdpObserver_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_webrtc_SdpObserver_clazz(env),
      "onSetSuccess",
"("
")"
"V",
      &g_org_webrtc_SdpObserver_onSetSuccess);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_webrtc_SdpObserver_onCreateFailure = 0;
static void Java_SdpObserver_onCreateFailure(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>&
    error) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_SdpObserver_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_webrtc_SdpObserver_clazz(env),
      "onCreateFailure",
"("
"Ljava/lang/String;"
")"
"V",
      &g_org_webrtc_SdpObserver_onCreateFailure);

     env->CallVoidMethod(obj.obj(),
          method_id, error.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_webrtc_SdpObserver_onSetFailure = 0;
static void Java_SdpObserver_onSetFailure(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jstring>&
    error) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_SdpObserver_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_webrtc_SdpObserver_clazz(env),
      "onSetFailure",
"("
"Ljava/lang/String;"
")"
"V",
      &g_org_webrtc_SdpObserver_onSetFailure);

     env->CallVoidMethod(obj.obj(),
          method_id, error.obj());
  jni_generator::CheckException(env);
}

#endif  // org_webrtc_SdpObserver_JNI
