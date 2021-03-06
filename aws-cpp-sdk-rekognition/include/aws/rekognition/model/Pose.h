﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Indicates the pose of the face as determined by pitch, roll, and the yaw.</p>
   */
  class AWS_REKOGNITION_API Pose
  {
  public:
    Pose();
    Pose(const Aws::Utils::Json::JsonValue& jsonValue);
    Pose& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Value representing the face rotation on the roll axis.</p>
     */
    inline double GetRoll() const{ return m_roll; }

    /**
     * <p>Value representing the face rotation on the roll axis.</p>
     */
    inline void SetRoll(double value) { m_rollHasBeenSet = true; m_roll = value; }

    /**
     * <p>Value representing the face rotation on the roll axis.</p>
     */
    inline Pose& WithRoll(double value) { SetRoll(value); return *this;}

    /**
     * <p>Value representing the face rotation on the yaw axis.</p>
     */
    inline double GetYaw() const{ return m_yaw; }

    /**
     * <p>Value representing the face rotation on the yaw axis.</p>
     */
    inline void SetYaw(double value) { m_yawHasBeenSet = true; m_yaw = value; }

    /**
     * <p>Value representing the face rotation on the yaw axis.</p>
     */
    inline Pose& WithYaw(double value) { SetYaw(value); return *this;}

    /**
     * <p>Value representing the face rotation on the pitch axis.</p>
     */
    inline double GetPitch() const{ return m_pitch; }

    /**
     * <p>Value representing the face rotation on the pitch axis.</p>
     */
    inline void SetPitch(double value) { m_pitchHasBeenSet = true; m_pitch = value; }

    /**
     * <p>Value representing the face rotation on the pitch axis.</p>
     */
    inline Pose& WithPitch(double value) { SetPitch(value); return *this;}

  private:
    double m_roll;
    bool m_rollHasBeenSet;
    double m_yaw;
    bool m_yawHasBeenSet;
    double m_pitch;
    bool m_pitchHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
