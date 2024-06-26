// Tencent is pleased to support the open source community by making Mars available.
// Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.

// Licensed under the MIT License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT

// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.

/*
 * ScopedJstring.h
 *
 *  Created on: 2014-8-27
 *      Author: yanguoyue
 */

#ifndef SCOPEDJSTRING_H_
#define SCOPEDJSTRING_H_

#include <jni.h>

class ScopedJstring {
 public:
    ScopedJstring(JNIEnv* _env, jstring _jstr);
    ScopedJstring(JNIEnv* _env, const char* _char);

    ~ScopedJstring();

    const char* GetChar() const;
    const char* SafeGetChar() const;
    jstring GetJstr() const;

 private:
    ScopedJstring();
    ScopedJstring(const ScopedJstring&);
    ScopedJstring& operator=(const ScopedJstring&);

 private:
    JNIEnv* env_;
    jstring jstr_;
    const char* char_;
    bool jstr2char_;
};

#endif /* SCOPEDJSTRING_H_ */
