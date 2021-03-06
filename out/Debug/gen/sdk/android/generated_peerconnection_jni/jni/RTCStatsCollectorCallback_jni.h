// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/RTCStatsCollectorCallback

#ifndef org_webrtc_RTCStatsCollectorCallback_JNI
#define org_webrtc_RTCStatsCollectorCallback_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"

// Step 1: forward declarations.
JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_RTCStatsCollectorCallback[];
const char kClassPath_org_webrtc_RTCStatsCollectorCallback[] =
    "org/webrtc/RTCStatsCollectorCallback";

// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_webrtc_RTCStatsCollectorCallback_clazz = 0;
#ifndef org_webrtc_RTCStatsCollectorCallback_clazz_defined
#define org_webrtc_RTCStatsCollectorCallback_clazz_defined
inline jclass org_webrtc_RTCStatsCollectorCallback_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_RTCStatsCollectorCallback,
      &g_org_webrtc_RTCStatsCollectorCallback_clazz);
}
#endif

// Step 2: method stubs.

static base::subtle::AtomicWord
    g_org_webrtc_RTCStatsCollectorCallback_onStatsDelivered = 0;
static void Java_RTCStatsCollectorCallback_onStatsDelivered(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>&
    report) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_RTCStatsCollectorCallback_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, org_webrtc_RTCStatsCollectorCallback_clazz(env),
      "onStatsDelivered",
"("
"Lorg/webrtc/RTCStatsReport;"
")"
"V",
      &g_org_webrtc_RTCStatsCollectorCallback_onStatsDelivered);

     env->CallVoidMethod(obj.obj(),
          method_id, report.obj());
  jni_generator::CheckException(env);
}

#endif  // org_webrtc_RTCStatsCollectorCallback_JNI
