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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusRequest : public ConfigServiceRequest
  {
  public:
    DescribeConfigRuleEvaluationStatusRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigRuleNames() const{ return m_configRuleNames; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline void SetConfigRuleNames(const Aws::Vector<Aws::String>& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline void SetConfigRuleNames(Aws::Vector<Aws::String>&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames = value; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& WithConfigRuleNames(const Aws::Vector<Aws::String>& value) { SetConfigRuleNames(value); return *this;}

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& WithConfigRuleNames(Aws::Vector<Aws::String>&& value) { SetConfigRuleNames(value); return *this;}

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& AddConfigRuleNames(const Aws::String& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& AddConfigRuleNames(Aws::String&& value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>The name of the AWS managed Config rules for which you want status
     * information. If you do not specify any names, AWS Config returns status
     * information for all AWS managed Config rules that you use.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& AddConfigRuleNames(const char* value) { m_configRuleNamesHasBeenSet = true; m_configRuleNames.push_back(value); return *this; }

    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The number of rule evaluation results that you want returned.</p> <p>This
     * parameter is required if the rule limit for your account is more than the
     * default of 50 rules.</p> <p>For more information about requesting a rule limit
     * increase, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">AWS
     * Config Limits</a> in the <i>AWS General Reference Guide</i>.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The number of rule evaluation results that you want returned.</p> <p>This
     * parameter is required if the rule limit for your account is more than the
     * default of 50 rules.</p> <p>For more information about requesting a rule limit
     * increase, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">AWS
     * Config Limits</a> in the <i>AWS General Reference Guide</i>.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The number of rule evaluation results that you want returned.</p> <p>This
     * parameter is required if the rule limit for your account is more than the
     * default of 50 rules.</p> <p>For more information about requesting a rule limit
     * increase, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_config">AWS
     * Config Limits</a> in the <i>AWS General Reference Guide</i>.</p>
     */
    inline DescribeConfigRuleEvaluationStatusRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_configRuleNames;
    bool m_configRuleNamesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
