/************************************************************
*
* Licensed to the Apache Software Foundation (ASF) under one
* or more contributor license agreements.  See the NOTICE file
* distributed with this work for additional information
* regarding copyright ownership.  The ASF licenses this file
* to you under the Apache License, Version 2.0 (the
* "License"); you may not use this file except in compliance
* with the License.  You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
* KIND, either express or implied.  See the License for the
* specific language governing permissions and limitations
* under the License.
*
*************************************************************/

#ifndef _SINGA_UTILS_CLOCK_H_
#define _SINGA_UTILS_CLOCK_H_

#include <string>

namespace singa {

class Clock {
 public:
  Clock();

  void Start();

  double End();
  double End(int iteration_num, std::string content);
  void EndWithLog(std::string content);
  void EndWithLog(int iteration_num, std::string content);

  double Elapse();
  double Elapse(int iteration_num, std::string content);
  void ElapseWithLog(std::string content);
  void ElapseWithLog(int iteration_num, std::string content);

 protected:
  int start_t = -1, end_t = -1;
};


}  // namespace singa




#endif  // SINGA_UTILS_CLOCK_H_
