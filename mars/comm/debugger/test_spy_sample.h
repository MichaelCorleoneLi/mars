// Tencent is pleased to support the open source community by making Mars available.
// Copyright (C) 2016 THL A29 Limited, a Tencent company. All rights reserved.

// Licensed under the MIT License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://opensource.org/licenses/MIT

// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.

//
//  testspy.h
//  PublicComponent
//
//  Created by yerungui on 14-5-13.
//

#ifndef __PublicComponent__testspy__
#define __PublicComponent__testspy__

class Test_Spy_Sample {
 public:
    Test_Spy_Sample();
    ~Test_Spy_Sample();

    void TestFun0();
    void TestFun2() {
        __TestFun1(1);
    }

 private:
    int __TestFun1(int i);

 private:
    //    int m_t;
};

#endif /* defined(__PublicComponent__testspy__) */
