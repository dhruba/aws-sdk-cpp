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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/AddTagsToResourceResult.h>
#include <aws/ssm/model/CancelCommandResult.h>
#include <aws/ssm/model/CreateActivationResult.h>
#include <aws/ssm/model/CreateAssociationResult.h>
#include <aws/ssm/model/CreateAssociationBatchResult.h>
#include <aws/ssm/model/CreateDocumentResult.h>
#include <aws/ssm/model/CreateMaintenanceWindowResult.h>
#include <aws/ssm/model/DeleteActivationResult.h>
#include <aws/ssm/model/DeleteAssociationResult.h>
#include <aws/ssm/model/DeleteDocumentResult.h>
#include <aws/ssm/model/DeleteMaintenanceWindowResult.h>
#include <aws/ssm/model/DeleteParameterResult.h>
#include <aws/ssm/model/DeregisterManagedInstanceResult.h>
#include <aws/ssm/model/DeregisterTargetFromMaintenanceWindowResult.h>
#include <aws/ssm/model/DeregisterTaskFromMaintenanceWindowResult.h>
#include <aws/ssm/model/DescribeActivationsResult.h>
#include <aws/ssm/model/DescribeAssociationResult.h>
#include <aws/ssm/model/DescribeAutomationExecutionsResult.h>
#include <aws/ssm/model/DescribeDocumentResult.h>
#include <aws/ssm/model/DescribeDocumentPermissionResult.h>
#include <aws/ssm/model/DescribeEffectiveInstanceAssociationsResult.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusResult.h>
#include <aws/ssm/model/DescribeInstanceInformationResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTargetsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTasksResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsResult.h>
#include <aws/ssm/model/DescribeParametersResult.h>
#include <aws/ssm/model/GetAutomationExecutionResult.h>
#include <aws/ssm/model/GetCommandInvocationResult.h>
#include <aws/ssm/model/GetDocumentResult.h>
#include <aws/ssm/model/GetInventoryResult.h>
#include <aws/ssm/model/GetInventorySchemaResult.h>
#include <aws/ssm/model/GetMaintenanceWindowResult.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionResult.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskResult.h>
#include <aws/ssm/model/GetParameterHistoryResult.h>
#include <aws/ssm/model/GetParametersResult.h>
#include <aws/ssm/model/ListAssociationsResult.h>
#include <aws/ssm/model/ListCommandInvocationsResult.h>
#include <aws/ssm/model/ListCommandsResult.h>
#include <aws/ssm/model/ListDocumentVersionsResult.h>
#include <aws/ssm/model/ListDocumentsResult.h>
#include <aws/ssm/model/ListInventoryEntriesResult.h>
#include <aws/ssm/model/ListTagsForResourceResult.h>
#include <aws/ssm/model/ModifyDocumentPermissionResult.h>
#include <aws/ssm/model/PutInventoryResult.h>
#include <aws/ssm/model/PutParameterResult.h>
#include <aws/ssm/model/RegisterTargetWithMaintenanceWindowResult.h>
#include <aws/ssm/model/RegisterTaskWithMaintenanceWindowResult.h>
#include <aws/ssm/model/RemoveTagsFromResourceResult.h>
#include <aws/ssm/model/SendCommandResult.h>
#include <aws/ssm/model/StartAutomationExecutionResult.h>
#include <aws/ssm/model/StopAutomationExecutionResult.h>
#include <aws/ssm/model/UpdateAssociationResult.h>
#include <aws/ssm/model/UpdateAssociationStatusResult.h>
#include <aws/ssm/model/UpdateDocumentResult.h>
#include <aws/ssm/model/UpdateDocumentDefaultVersionResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowResult.h>
#include <aws/ssm/model/UpdateManagedInstanceRoleResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace SSM
{

namespace Model
{
        class AddTagsToResourceRequest;
        class CancelCommandRequest;
        class CreateActivationRequest;
        class CreateAssociationRequest;
        class CreateAssociationBatchRequest;
        class CreateDocumentRequest;
        class CreateMaintenanceWindowRequest;
        class DeleteActivationRequest;
        class DeleteAssociationRequest;
        class DeleteDocumentRequest;
        class DeleteMaintenanceWindowRequest;
        class DeleteParameterRequest;
        class DeregisterManagedInstanceRequest;
        class DeregisterTargetFromMaintenanceWindowRequest;
        class DeregisterTaskFromMaintenanceWindowRequest;
        class DescribeActivationsRequest;
        class DescribeAssociationRequest;
        class DescribeAutomationExecutionsRequest;
        class DescribeDocumentRequest;
        class DescribeDocumentPermissionRequest;
        class DescribeEffectiveInstanceAssociationsRequest;
        class DescribeInstanceAssociationsStatusRequest;
        class DescribeInstanceInformationRequest;
        class DescribeMaintenanceWindowExecutionTaskInvocationsRequest;
        class DescribeMaintenanceWindowExecutionTasksRequest;
        class DescribeMaintenanceWindowExecutionsRequest;
        class DescribeMaintenanceWindowTargetsRequest;
        class DescribeMaintenanceWindowTasksRequest;
        class DescribeMaintenanceWindowsRequest;
        class DescribeParametersRequest;
        class GetAutomationExecutionRequest;
        class GetCommandInvocationRequest;
        class GetDocumentRequest;
        class GetInventoryRequest;
        class GetInventorySchemaRequest;
        class GetMaintenanceWindowRequest;
        class GetMaintenanceWindowExecutionRequest;
        class GetMaintenanceWindowExecutionTaskRequest;
        class GetParameterHistoryRequest;
        class GetParametersRequest;
        class ListAssociationsRequest;
        class ListCommandInvocationsRequest;
        class ListCommandsRequest;
        class ListDocumentVersionsRequest;
        class ListDocumentsRequest;
        class ListInventoryEntriesRequest;
        class ListTagsForResourceRequest;
        class ModifyDocumentPermissionRequest;
        class PutInventoryRequest;
        class PutParameterRequest;
        class RegisterTargetWithMaintenanceWindowRequest;
        class RegisterTaskWithMaintenanceWindowRequest;
        class RemoveTagsFromResourceRequest;
        class SendCommandRequest;
        class StartAutomationExecutionRequest;
        class StopAutomationExecutionRequest;
        class UpdateAssociationRequest;
        class UpdateAssociationStatusRequest;
        class UpdateDocumentRequest;
        class UpdateDocumentDefaultVersionRequest;
        class UpdateMaintenanceWindowRequest;
        class UpdateManagedInstanceRoleRequest;

        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<SSMErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<CancelCommandResult, Aws::Client::AWSError<SSMErrors>> CancelCommandOutcome;
        typedef Aws::Utils::Outcome<CreateActivationResult, Aws::Client::AWSError<SSMErrors>> CreateActivationOutcome;
        typedef Aws::Utils::Outcome<CreateAssociationResult, Aws::Client::AWSError<SSMErrors>> CreateAssociationOutcome;
        typedef Aws::Utils::Outcome<CreateAssociationBatchResult, Aws::Client::AWSError<SSMErrors>> CreateAssociationBatchOutcome;
        typedef Aws::Utils::Outcome<CreateDocumentResult, Aws::Client::AWSError<SSMErrors>> CreateDocumentOutcome;
        typedef Aws::Utils::Outcome<CreateMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> CreateMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DeleteActivationResult, Aws::Client::AWSError<SSMErrors>> DeleteActivationOutcome;
        typedef Aws::Utils::Outcome<DeleteAssociationResult, Aws::Client::AWSError<SSMErrors>> DeleteAssociationOutcome;
        typedef Aws::Utils::Outcome<DeleteDocumentResult, Aws::Client::AWSError<SSMErrors>> DeleteDocumentOutcome;
        typedef Aws::Utils::Outcome<DeleteMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> DeleteMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DeleteParameterResult, Aws::Client::AWSError<SSMErrors>> DeleteParameterOutcome;
        typedef Aws::Utils::Outcome<DeregisterManagedInstanceResult, Aws::Client::AWSError<SSMErrors>> DeregisterManagedInstanceOutcome;
        typedef Aws::Utils::Outcome<DeregisterTargetFromMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> DeregisterTargetFromMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DeregisterTaskFromMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> DeregisterTaskFromMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<DescribeActivationsResult, Aws::Client::AWSError<SSMErrors>> DescribeActivationsOutcome;
        typedef Aws::Utils::Outcome<DescribeAssociationResult, Aws::Client::AWSError<SSMErrors>> DescribeAssociationOutcome;
        typedef Aws::Utils::Outcome<DescribeAutomationExecutionsResult, Aws::Client::AWSError<SSMErrors>> DescribeAutomationExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentResult, Aws::Client::AWSError<SSMErrors>> DescribeDocumentOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentPermissionResult, Aws::Client::AWSError<SSMErrors>> DescribeDocumentPermissionOutcome;
        typedef Aws::Utils::Outcome<DescribeEffectiveInstanceAssociationsResult, Aws::Client::AWSError<SSMErrors>> DescribeEffectiveInstanceAssociationsOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceAssociationsStatusResult, Aws::Client::AWSError<SSMErrors>> DescribeInstanceAssociationsStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceInformationResult, Aws::Client::AWSError<SSMErrors>> DescribeInstanceInformationOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionTaskInvocationsResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowExecutionTaskInvocationsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionTasksResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowExecutionTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionsResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowExecutionsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowTargetsResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowTasksResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeMaintenanceWindowsResult, Aws::Client::AWSError<SSMErrors>> DescribeMaintenanceWindowsOutcome;
        typedef Aws::Utils::Outcome<DescribeParametersResult, Aws::Client::AWSError<SSMErrors>> DescribeParametersOutcome;
        typedef Aws::Utils::Outcome<GetAutomationExecutionResult, Aws::Client::AWSError<SSMErrors>> GetAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<GetCommandInvocationResult, Aws::Client::AWSError<SSMErrors>> GetCommandInvocationOutcome;
        typedef Aws::Utils::Outcome<GetDocumentResult, Aws::Client::AWSError<SSMErrors>> GetDocumentOutcome;
        typedef Aws::Utils::Outcome<GetInventoryResult, Aws::Client::AWSError<SSMErrors>> GetInventoryOutcome;
        typedef Aws::Utils::Outcome<GetInventorySchemaResult, Aws::Client::AWSError<SSMErrors>> GetInventorySchemaOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> GetMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionResult, Aws::Client::AWSError<SSMErrors>> GetMaintenanceWindowExecutionOutcome;
        typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionTaskResult, Aws::Client::AWSError<SSMErrors>> GetMaintenanceWindowExecutionTaskOutcome;
        typedef Aws::Utils::Outcome<GetParameterHistoryResult, Aws::Client::AWSError<SSMErrors>> GetParameterHistoryOutcome;
        typedef Aws::Utils::Outcome<GetParametersResult, Aws::Client::AWSError<SSMErrors>> GetParametersOutcome;
        typedef Aws::Utils::Outcome<ListAssociationsResult, Aws::Client::AWSError<SSMErrors>> ListAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListCommandInvocationsResult, Aws::Client::AWSError<SSMErrors>> ListCommandInvocationsOutcome;
        typedef Aws::Utils::Outcome<ListCommandsResult, Aws::Client::AWSError<SSMErrors>> ListCommandsOutcome;
        typedef Aws::Utils::Outcome<ListDocumentVersionsResult, Aws::Client::AWSError<SSMErrors>> ListDocumentVersionsOutcome;
        typedef Aws::Utils::Outcome<ListDocumentsResult, Aws::Client::AWSError<SSMErrors>> ListDocumentsOutcome;
        typedef Aws::Utils::Outcome<ListInventoryEntriesResult, Aws::Client::AWSError<SSMErrors>> ListInventoryEntriesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<SSMErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyDocumentPermissionResult, Aws::Client::AWSError<SSMErrors>> ModifyDocumentPermissionOutcome;
        typedef Aws::Utils::Outcome<PutInventoryResult, Aws::Client::AWSError<SSMErrors>> PutInventoryOutcome;
        typedef Aws::Utils::Outcome<PutParameterResult, Aws::Client::AWSError<SSMErrors>> PutParameterOutcome;
        typedef Aws::Utils::Outcome<RegisterTargetWithMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> RegisterTargetWithMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<RegisterTaskWithMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> RegisterTaskWithMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<SSMErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<SendCommandResult, Aws::Client::AWSError<SSMErrors>> SendCommandOutcome;
        typedef Aws::Utils::Outcome<StartAutomationExecutionResult, Aws::Client::AWSError<SSMErrors>> StartAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<StopAutomationExecutionResult, Aws::Client::AWSError<SSMErrors>> StopAutomationExecutionOutcome;
        typedef Aws::Utils::Outcome<UpdateAssociationResult, Aws::Client::AWSError<SSMErrors>> UpdateAssociationOutcome;
        typedef Aws::Utils::Outcome<UpdateAssociationStatusResult, Aws::Client::AWSError<SSMErrors>> UpdateAssociationStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateDocumentResult, Aws::Client::AWSError<SSMErrors>> UpdateDocumentOutcome;
        typedef Aws::Utils::Outcome<UpdateDocumentDefaultVersionResult, Aws::Client::AWSError<SSMErrors>> UpdateDocumentDefaultVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateMaintenanceWindowResult, Aws::Client::AWSError<SSMErrors>> UpdateMaintenanceWindowOutcome;
        typedef Aws::Utils::Outcome<UpdateManagedInstanceRoleResult, Aws::Client::AWSError<SSMErrors>> UpdateManagedInstanceRoleOutcome;

        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<CancelCommandOutcome> CancelCommandOutcomeCallable;
        typedef std::future<CreateActivationOutcome> CreateActivationOutcomeCallable;
        typedef std::future<CreateAssociationOutcome> CreateAssociationOutcomeCallable;
        typedef std::future<CreateAssociationBatchOutcome> CreateAssociationBatchOutcomeCallable;
        typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
        typedef std::future<CreateMaintenanceWindowOutcome> CreateMaintenanceWindowOutcomeCallable;
        typedef std::future<DeleteActivationOutcome> DeleteActivationOutcomeCallable;
        typedef std::future<DeleteAssociationOutcome> DeleteAssociationOutcomeCallable;
        typedef std::future<DeleteDocumentOutcome> DeleteDocumentOutcomeCallable;
        typedef std::future<DeleteMaintenanceWindowOutcome> DeleteMaintenanceWindowOutcomeCallable;
        typedef std::future<DeleteParameterOutcome> DeleteParameterOutcomeCallable;
        typedef std::future<DeregisterManagedInstanceOutcome> DeregisterManagedInstanceOutcomeCallable;
        typedef std::future<DeregisterTargetFromMaintenanceWindowOutcome> DeregisterTargetFromMaintenanceWindowOutcomeCallable;
        typedef std::future<DeregisterTaskFromMaintenanceWindowOutcome> DeregisterTaskFromMaintenanceWindowOutcomeCallable;
        typedef std::future<DescribeActivationsOutcome> DescribeActivationsOutcomeCallable;
        typedef std::future<DescribeAssociationOutcome> DescribeAssociationOutcomeCallable;
        typedef std::future<DescribeAutomationExecutionsOutcome> DescribeAutomationExecutionsOutcomeCallable;
        typedef std::future<DescribeDocumentOutcome> DescribeDocumentOutcomeCallable;
        typedef std::future<DescribeDocumentPermissionOutcome> DescribeDocumentPermissionOutcomeCallable;
        typedef std::future<DescribeEffectiveInstanceAssociationsOutcome> DescribeEffectiveInstanceAssociationsOutcomeCallable;
        typedef std::future<DescribeInstanceAssociationsStatusOutcome> DescribeInstanceAssociationsStatusOutcomeCallable;
        typedef std::future<DescribeInstanceInformationOutcome> DescribeInstanceInformationOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowExecutionTaskInvocationsOutcome> DescribeMaintenanceWindowExecutionTaskInvocationsOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowExecutionTasksOutcome> DescribeMaintenanceWindowExecutionTasksOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowExecutionsOutcome> DescribeMaintenanceWindowExecutionsOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowTargetsOutcome> DescribeMaintenanceWindowTargetsOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowTasksOutcome> DescribeMaintenanceWindowTasksOutcomeCallable;
        typedef std::future<DescribeMaintenanceWindowsOutcome> DescribeMaintenanceWindowsOutcomeCallable;
        typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
        typedef std::future<GetAutomationExecutionOutcome> GetAutomationExecutionOutcomeCallable;
        typedef std::future<GetCommandInvocationOutcome> GetCommandInvocationOutcomeCallable;
        typedef std::future<GetDocumentOutcome> GetDocumentOutcomeCallable;
        typedef std::future<GetInventoryOutcome> GetInventoryOutcomeCallable;
        typedef std::future<GetInventorySchemaOutcome> GetInventorySchemaOutcomeCallable;
        typedef std::future<GetMaintenanceWindowOutcome> GetMaintenanceWindowOutcomeCallable;
        typedef std::future<GetMaintenanceWindowExecutionOutcome> GetMaintenanceWindowExecutionOutcomeCallable;
        typedef std::future<GetMaintenanceWindowExecutionTaskOutcome> GetMaintenanceWindowExecutionTaskOutcomeCallable;
        typedef std::future<GetParameterHistoryOutcome> GetParameterHistoryOutcomeCallable;
        typedef std::future<GetParametersOutcome> GetParametersOutcomeCallable;
        typedef std::future<ListAssociationsOutcome> ListAssociationsOutcomeCallable;
        typedef std::future<ListCommandInvocationsOutcome> ListCommandInvocationsOutcomeCallable;
        typedef std::future<ListCommandsOutcome> ListCommandsOutcomeCallable;
        typedef std::future<ListDocumentVersionsOutcome> ListDocumentVersionsOutcomeCallable;
        typedef std::future<ListDocumentsOutcome> ListDocumentsOutcomeCallable;
        typedef std::future<ListInventoryEntriesOutcome> ListInventoryEntriesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyDocumentPermissionOutcome> ModifyDocumentPermissionOutcomeCallable;
        typedef std::future<PutInventoryOutcome> PutInventoryOutcomeCallable;
        typedef std::future<PutParameterOutcome> PutParameterOutcomeCallable;
        typedef std::future<RegisterTargetWithMaintenanceWindowOutcome> RegisterTargetWithMaintenanceWindowOutcomeCallable;
        typedef std::future<RegisterTaskWithMaintenanceWindowOutcome> RegisterTaskWithMaintenanceWindowOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<SendCommandOutcome> SendCommandOutcomeCallable;
        typedef std::future<StartAutomationExecutionOutcome> StartAutomationExecutionOutcomeCallable;
        typedef std::future<StopAutomationExecutionOutcome> StopAutomationExecutionOutcomeCallable;
        typedef std::future<UpdateAssociationOutcome> UpdateAssociationOutcomeCallable;
        typedef std::future<UpdateAssociationStatusOutcome> UpdateAssociationStatusOutcomeCallable;
        typedef std::future<UpdateDocumentOutcome> UpdateDocumentOutcomeCallable;
        typedef std::future<UpdateDocumentDefaultVersionOutcome> UpdateDocumentDefaultVersionOutcomeCallable;
        typedef std::future<UpdateMaintenanceWindowOutcome> UpdateMaintenanceWindowOutcomeCallable;
        typedef std::future<UpdateManagedInstanceRoleOutcome> UpdateManagedInstanceRoleOutcomeCallable;
} // namespace Model

  class SSMClient;

    typedef std::function<void(const SSMClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CancelCommandRequest&, const Model::CancelCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateActivationRequest&, const Model::CreateActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationRequest&, const Model::CreateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationBatchRequest&, const Model::CreateAssociationBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationBatchResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateDocumentRequest&, const Model::CreateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateMaintenanceWindowRequest&, const Model::CreateMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteActivationRequest&, const Model::DeleteActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteAssociationRequest&, const Model::DeleteAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteDocumentRequest&, const Model::DeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteMaintenanceWindowRequest&, const Model::DeleteMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteParameterRequest&, const Model::DeleteParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParameterResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterManagedInstanceRequest&, const Model::DeregisterManagedInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterManagedInstanceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterTargetFromMaintenanceWindowRequest&, const Model::DeregisterTargetFromMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTargetFromMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterTaskFromMaintenanceWindowRequest&, const Model::DeregisterTaskFromMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTaskFromMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeActivationsRequest&, const Model::DescribeActivationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActivationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAssociationRequest&, const Model::DescribeAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAutomationExecutionsRequest&, const Model::DescribeAutomationExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutomationExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeDocumentRequest&, const Model::DescribeDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeDocumentPermissionRequest&, const Model::DescribeDocumentPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentPermissionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeEffectiveInstanceAssociationsRequest&, const Model::DescribeEffectiveInstanceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEffectiveInstanceAssociationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstanceAssociationsStatusRequest&, const Model::DescribeInstanceAssociationsStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAssociationsStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstanceInformationRequest&, const Model::DescribeInstanceInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceInformationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest&, const Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionTasksRequest&, const Model::DescribeMaintenanceWindowExecutionTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionsRequest&, const Model::DescribeMaintenanceWindowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowTargetsRequest&, const Model::DescribeMaintenanceWindowTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowTargetsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowTasksRequest&, const Model::DescribeMaintenanceWindowTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowTasksResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowsRequest&, const Model::DescribeMaintenanceWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeParametersRequest&, const Model::DescribeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParametersResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetAutomationExecutionRequest&, const Model::GetAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetCommandInvocationRequest&, const Model::GetCommandInvocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommandInvocationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetDocumentRequest&, const Model::GetDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetInventoryRequest&, const Model::GetInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetInventorySchemaRequest&, const Model::GetInventorySchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInventorySchemaResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowRequest&, const Model::GetMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowExecutionRequest&, const Model::GetMaintenanceWindowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowExecutionTaskRequest&, const Model::GetMaintenanceWindowExecutionTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowExecutionTaskResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParameterHistoryRequest&, const Model::GetParameterHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParameterHistoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParametersRequest&, const Model::GetParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListAssociationsRequest&, const Model::ListAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListCommandInvocationsRequest&, const Model::ListCommandInvocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommandInvocationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListCommandsRequest&, const Model::ListCommandsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommandsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentVersionsRequest&, const Model::ListDocumentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentVersionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentsRequest&, const Model::ListDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListInventoryEntriesRequest&, const Model::ListInventoryEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInventoryEntriesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ModifyDocumentPermissionRequest&, const Model::ModifyDocumentPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDocumentPermissionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutInventoryRequest&, const Model::PutInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutParameterRequest&, const Model::PutParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutParameterResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterTargetWithMaintenanceWindowRequest&, const Model::RegisterTargetWithMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTargetWithMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterTaskWithMaintenanceWindowRequest&, const Model::RegisterTaskWithMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTaskWithMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::SendCommandRequest&, const Model::SendCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartAutomationExecutionRequest&, const Model::StartAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StopAutomationExecutionRequest&, const Model::StopAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationRequest&, const Model::UpdateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationStatusRequest&, const Model::UpdateAssociationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentRequest&, const Model::UpdateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentDefaultVersionRequest&, const Model::UpdateDocumentDefaultVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentDefaultVersionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowRequest&, const Model::UpdateMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateManagedInstanceRoleRequest&, const Model::UpdateManagedInstanceRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateManagedInstanceRoleResponseReceivedHandler;

  /**
   * <p>Amazon EC2 Systems Manager is a collection of capabilities that helps you
   * automate management tasks such as collecting system inventory, applying
   * operating system (OS) patches, automating the creation of Amazon Machine Images
   * (AMIs), and configuring operating systems (OSs) and applications at scale.
   * Systems Manager works with managed instances: Amazon EC2 instances and servers
   * or virtual machines (VMs) in your on-premises environment that are configured
   * for Systems Manager. </p> <p>This references is intended to be used with the EC2
   * Systems Manager User Guide (<a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/systems-manager.html">Linux</a>)
   * (<a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/systems-manager.html">Windows</a>).</p>
   * <p>To get started, verify prerequisites and configure managed instances (<a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/systems-manager-prereqs.html">Linux</a>)
   * (<a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/systems-manager-prereqs.html">Windows</a>).</p>
   */
  class AWS_SSM_API SSMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~SSMClient();

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you assign to your managed instances. Tags enable you to
         * categorize your managed instances in different ways, for example, by purpose,
         * owner, or environment. Each tag consists of a key and an optional value, both of
         * which you define. For example, you could define a set of tags for your account's
         * managed instances that helps you track each instance's owner and stack level.
         * For example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test. Each resource can have a maximum of
         * 10 tags. </p> <p>We recommend that you devise a set of tag keys that meets your
         * needs for each resource type. Using a consistent set of tag keys makes it easier
         * for you to manage your resources. You can search and filter the resources based
         * on the tags you add. Tags don't have any semantic meaning to Amazon EC2 and are
         * interpreted strictly as a string of characters. </p> <p>For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the Amazon EC2 User Guide. </p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you assign to your managed instances. Tags enable you to
         * categorize your managed instances in different ways, for example, by purpose,
         * owner, or environment. Each tag consists of a key and an optional value, both of
         * which you define. For example, you could define a set of tags for your account's
         * managed instances that helps you track each instance's owner and stack level.
         * For example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test. Each resource can have a maximum of
         * 10 tags. </p> <p>We recommend that you devise a set of tag keys that meets your
         * needs for each resource type. Using a consistent set of tag keys makes it easier
         * for you to manage your resources. You can search and filter the resources based
         * on the tags you add. Tags don't have any semantic meaning to Amazon EC2 and are
         * interpreted strictly as a string of characters. </p> <p>For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the Amazon EC2 User Guide. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you assign to your managed instances. Tags enable you to
         * categorize your managed instances in different ways, for example, by purpose,
         * owner, or environment. Each tag consists of a key and an optional value, both of
         * which you define. For example, you could define a set of tags for your account's
         * managed instances that helps you track each instance's owner and stack level.
         * For example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test. Each resource can have a maximum of
         * 10 tags. </p> <p>We recommend that you devise a set of tag keys that meets your
         * needs for each resource type. Using a consistent set of tag keys makes it easier
         * for you to manage your resources. You can search and filter the resources based
         * on the tags you add. Tags don't have any semantic meaning to Amazon EC2 and are
         * interpreted strictly as a string of characters. </p> <p>For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the Amazon EC2 User Guide. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p>
         */
        virtual Model::CancelCommandOutcome CancelCommand(const Model::CancelCommandRequest& request) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelCommandOutcomeCallable CancelCommandCallable(const Model::CancelCommandRequest& request) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelCommandAsync(const Model::CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/managed-instances.html">Setting
         * Up Managed Instances (Linux)</a> or <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/managed-instances.html">Setting
         * Up Managed Instances (Windows)</a> in the Amazon EC2 User Guide. </p>
         */
        virtual Model::CreateActivationOutcome CreateActivation(const Model::CreateActivationRequest& request) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/managed-instances.html">Setting
         * Up Managed Instances (Linux)</a> or <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/managed-instances.html">Setting
         * Up Managed Instances (Windows)</a> in the Amazon EC2 User Guide. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActivationOutcomeCallable CreateActivationCallable(const Model::CreateActivationRequest& request) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/managed-instances.html">Setting
         * Up Managed Instances (Linux)</a> or <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/managed-instances.html">Setting
         * Up Managed Instances (Windows)</a> in the Amazon EC2 User Guide. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActivationAsync(const Model::CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified SSM document with the specified instances or
         * targets.</p> <p>When you associate an SSM document with one or more instances
         * using instance IDs or tags, the SSM agent running on the instance processes the
         * document and configures the instance as specified.</p> <p>If you associate a
         * document with an instance that already has an associated document, the system
         * throws the AssociationAlreadyExists exception.</p>
         */
        virtual Model::CreateAssociationOutcome CreateAssociation(const Model::CreateAssociationRequest& request) const;

        /**
         * <p>Associates the specified SSM document with the specified instances or
         * targets.</p> <p>When you associate an SSM document with one or more instances
         * using instance IDs or tags, the SSM agent running on the instance processes the
         * document and configures the instance as specified.</p> <p>If you associate a
         * document with an instance that already has an associated document, the system
         * throws the AssociationAlreadyExists exception.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssociationOutcomeCallable CreateAssociationCallable(const Model::CreateAssociationRequest& request) const;

        /**
         * <p>Associates the specified SSM document with the specified instances or
         * targets.</p> <p>When you associate an SSM document with one or more instances
         * using instance IDs or tags, the SSM agent running on the instance processes the
         * document and configures the instance as specified.</p> <p>If you associate a
         * document with an instance that already has an associated document, the system
         * throws the AssociationAlreadyExists exception.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssociationAsync(const Model::CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified SSM document with the specified instances or
         * targets.</p> <p>When you associate an SSM document with one or more instances
         * using instance IDs or tags, the SSM agent running on the instance processes the
         * document and configures the instance as specified.</p> <p>If you associate a
         * document with an instance that already has an associated document, the system
         * throws the AssociationAlreadyExists exception.</p>
         */
        virtual Model::CreateAssociationBatchOutcome CreateAssociationBatch(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * <p>Associates the specified SSM document with the specified instances or
         * targets.</p> <p>When you associate an SSM document with one or more instances
         * using instance IDs or tags, the SSM agent running on the instance processes the
         * document and configures the instance as specified.</p> <p>If you associate a
         * document with an instance that already has an associated document, the system
         * throws the AssociationAlreadyExists exception.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssociationBatchOutcomeCallable CreateAssociationBatchCallable(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * <p>Associates the specified SSM document with the specified instances or
         * targets.</p> <p>When you associate an SSM document with one or more instances
         * using instance IDs or tags, the SSM agent running on the instance processes the
         * document and configures the instance as specified.</p> <p>If you associate a
         * document with an instance that already has an associated document, the system
         * throws the AssociationAlreadyExists exception.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssociationBatchAsync(const Model::CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SSM document.</p> <p>After you create an SSM document, you can use
         * CreateAssociation to associate it with one or more running instances.</p>
         */
        virtual Model::CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest& request) const;

        /**
         * <p>Creates an SSM document.</p> <p>After you create an SSM document, you can use
         * CreateAssociation to associate it with one or more running instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request) const;

        /**
         * <p>Creates an SSM document.</p> <p>After you create an SSM document, you can use
         * CreateAssociation to associate it with one or more running instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Maintenance Window.</p>
         */
        virtual Model::CreateMaintenanceWindowOutcome CreateMaintenanceWindow(const Model::CreateMaintenanceWindowRequest& request) const;

        /**
         * <p>Creates a new Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMaintenanceWindowOutcomeCallable CreateMaintenanceWindowCallable(const Model::CreateMaintenanceWindowRequest& request) const;

        /**
         * <p>Creates a new Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMaintenanceWindowAsync(const Model::CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p>
         */
        virtual Model::DeleteActivationOutcome DeleteActivation(const Model::DeleteActivationRequest& request) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActivationOutcomeCallable DeleteActivationCallable(const Model::DeleteActivationRequest& request) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActivationAsync(const Model::DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified SSM document from the specified instance.</p>
         * <p>When you disassociate an SSM document from an instance, it does not change
         * the configuration of the instance. To change the configuration state of an
         * instance after you disassociate a document, you must create a new document with
         * the desired configuration and associate it with the instance.</p>
         */
        virtual Model::DeleteAssociationOutcome DeleteAssociation(const Model::DeleteAssociationRequest& request) const;

        /**
         * <p>Disassociates the specified SSM document from the specified instance.</p>
         * <p>When you disassociate an SSM document from an instance, it does not change
         * the configuration of the instance. To change the configuration state of an
         * instance after you disassociate a document, you must create a new document with
         * the desired configuration and associate it with the instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssociationOutcomeCallable DeleteAssociationCallable(const Model::DeleteAssociationRequest& request) const;

        /**
         * <p>Disassociates the specified SSM document from the specified instance.</p>
         * <p>When you disassociate an SSM document from an instance, it does not change
         * the configuration of the instance. To change the configuration state of an
         * instance after you disassociate a document, you must create a new document with
         * the desired configuration and associate it with the instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssociationAsync(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the SSM document and all instance associations to the document.</p>
         * <p>Before you delete the SSM document, we recommend that you use
         * DeleteAssociation to disassociate all instances that are associated with the
         * document.</p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Deletes the SSM document and all instance associations to the document.</p>
         * <p>Before you delete the SSM document, we recommend that you use
         * DeleteAssociation to disassociate all instances that are associated with the
         * document.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentOutcomeCallable DeleteDocumentCallable(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Deletes the SSM document and all instance associations to the document.</p>
         * <p>Before you delete the SSM document, we recommend that you use
         * DeleteAssociation to disassociate all instances that are associated with the
         * document.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentAsync(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Maintenance Window.</p>
         */
        virtual Model::DeleteMaintenanceWindowOutcome DeleteMaintenanceWindow(const Model::DeleteMaintenanceWindowRequest& request) const;

        /**
         * <p>Deletes a Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMaintenanceWindowOutcomeCallable DeleteMaintenanceWindowCallable(const Model::DeleteMaintenanceWindowRequest& request) const;

        /**
         * <p>Deletes a Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMaintenanceWindowAsync(const Model::DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a parameter from the system.</p>
         */
        virtual Model::DeleteParameterOutcome DeleteParameter(const Model::DeleteParameterRequest& request) const;

        /**
         * <p>Delete a parameter from the system.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteParameterOutcomeCallable DeleteParameterCallable(const Model::DeleteParameterRequest& request) const;

        /**
         * <p>Delete a parameter from the system.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteParameterAsync(const Model::DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the instance again at any time. If you don’t plan to use Run
         * Command on the server, we suggest uninstalling the SSM agent first.</p>
         */
        virtual Model::DeregisterManagedInstanceOutcome DeregisterManagedInstance(const Model::DeregisterManagedInstanceRequest& request) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the instance again at any time. If you don’t plan to use Run
         * Command on the server, we suggest uninstalling the SSM agent first.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterManagedInstanceOutcomeCallable DeregisterManagedInstanceCallable(const Model::DeregisterManagedInstanceRequest& request) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the instance again at any time. If you don’t plan to use Run
         * Command on the server, we suggest uninstalling the SSM agent first.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterManagedInstanceAsync(const Model::DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a target from a Maintenance Window.</p>
         */
        virtual Model::DeregisterTargetFromMaintenanceWindowOutcome DeregisterTargetFromMaintenanceWindow(const Model::DeregisterTargetFromMaintenanceWindowRequest& request) const;

        /**
         * <p>Removes a target from a Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTargetFromMaintenanceWindowOutcomeCallable DeregisterTargetFromMaintenanceWindowCallable(const Model::DeregisterTargetFromMaintenanceWindowRequest& request) const;

        /**
         * <p>Removes a target from a Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTargetFromMaintenanceWindowAsync(const Model::DeregisterTargetFromMaintenanceWindowRequest& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a task from a Maintenance Window.</p>
         */
        virtual Model::DeregisterTaskFromMaintenanceWindowOutcome DeregisterTaskFromMaintenanceWindow(const Model::DeregisterTaskFromMaintenanceWindowRequest& request) const;

        /**
         * <p>Removes a task from a Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterTaskFromMaintenanceWindowOutcomeCallable DeregisterTaskFromMaintenanceWindowCallable(const Model::DeregisterTaskFromMaintenanceWindowRequest& request) const;

        /**
         * <p>Removes a task from a Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterTaskFromMaintenanceWindowAsync(const Model::DeregisterTaskFromMaintenanceWindowRequest& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this registration.</p>
         */
        virtual Model::DescribeActivationsOutcome DescribeActivations(const Model::DescribeActivationsRequest& request) const;

        /**
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this registration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivationsOutcomeCallable DescribeActivationsCallable(const Model::DescribeActivationsRequest& request) const;

        /**
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this registration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActivationsAsync(const Model::DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the associations for the specified SSM document or instance.</p>
         */
        virtual Model::DescribeAssociationOutcome DescribeAssociation(const Model::DescribeAssociationRequest& request) const;

        /**
         * <p>Describes the associations for the specified SSM document or instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssociationOutcomeCallable DescribeAssociationCallable(const Model::DescribeAssociationRequest& request) const;

        /**
         * <p>Describes the associations for the specified SSM document or instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssociationAsync(const Model::DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about all active and terminated Automation executions.</p>
         */
        virtual Model::DescribeAutomationExecutionsOutcome DescribeAutomationExecutions(const Model::DescribeAutomationExecutionsRequest& request) const;

        /**
         * <p>Provides details about all active and terminated Automation executions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutomationExecutionsOutcomeCallable DescribeAutomationExecutionsCallable(const Model::DescribeAutomationExecutionsRequest& request) const;

        /**
         * <p>Provides details about all active and terminated Automation executions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutomationExecutionsAsync(const Model::DescribeAutomationExecutionsRequest& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified SSM document.</p>
         */
        virtual Model::DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest& request) const;

        /**
         * <p>Describes the specified SSM document.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentOutcomeCallable DescribeDocumentCallable(const Model::DescribeDocumentRequest& request) const;

        /**
         * <p>Describes the specified SSM document.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentAsync(const Model::DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions for an SSM document. If you created the document,
         * you are the owner. If a document is shared, it can either be shared privately
         * (by specifying a user’s AWS account ID) or publicly (<i>All</i>). </p>
         */
        virtual Model::DescribeDocumentPermissionOutcome DescribeDocumentPermission(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * <p>Describes the permissions for an SSM document. If you created the document,
         * you are the owner. If a document is shared, it can either be shared privately
         * (by specifying a user’s AWS account ID) or publicly (<i>All</i>). </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentPermissionOutcomeCallable DescribeDocumentPermissionCallable(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * <p>Describes the permissions for an SSM document. If you created the document,
         * you are the owner. If a document is shared, it can either be shared privately
         * (by specifying a user’s AWS account ID) or publicly (<i>All</i>). </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentPermissionAsync(const Model::DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>All associations for the instance(s).</p>
         */
        virtual Model::DescribeEffectiveInstanceAssociationsOutcome DescribeEffectiveInstanceAssociations(const Model::DescribeEffectiveInstanceAssociationsRequest& request) const;

        /**
         * <p>All associations for the instance(s).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEffectiveInstanceAssociationsOutcomeCallable DescribeEffectiveInstanceAssociationsCallable(const Model::DescribeEffectiveInstanceAssociationsRequest& request) const;

        /**
         * <p>All associations for the instance(s).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEffectiveInstanceAssociationsAsync(const Model::DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The status of the associations for the instance(s).</p>
         */
        virtual Model::DescribeInstanceAssociationsStatusOutcome DescribeInstanceAssociationsStatus(const Model::DescribeInstanceAssociationsStatusRequest& request) const;

        /**
         * <p>The status of the associations for the instance(s).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceAssociationsStatusOutcomeCallable DescribeInstanceAssociationsStatusCallable(const Model::DescribeInstanceAssociationsStatusRequest& request) const;

        /**
         * <p>The status of the associations for the instance(s).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceAssociationsStatusAsync(const Model::DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p>
         */
        virtual Model::DescribeInstanceInformationOutcome DescribeInstanceInformation(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceInformationOutcomeCallable DescribeInstanceInformationCallable(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceInformationAsync(const Model::DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the individual task executions (one per target) for a particular
         * task executed as part of a Maintenance Window execution.</p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcome DescribeMaintenanceWindowExecutionTaskInvocations(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const;

        /**
         * <p>Retrieves the individual task executions (one per target) for a particular
         * task executed as part of a Maintenance Window execution.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcomeCallable DescribeMaintenanceWindowExecutionTaskInvocationsCallable(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const;

        /**
         * <p>Retrieves the individual task executions (one per target) for a particular
         * task executed as part of a Maintenance Window execution.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowExecutionTaskInvocationsAsync(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a given Maintenance Window execution, lists the tasks that were
         * executed.</p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionTasksOutcome DescribeMaintenanceWindowExecutionTasks(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request) const;

        /**
         * <p>For a given Maintenance Window execution, lists the tasks that were
         * executed.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowExecutionTasksOutcomeCallable DescribeMaintenanceWindowExecutionTasksCallable(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request) const;

        /**
         * <p>For a given Maintenance Window execution, lists the tasks that were
         * executed.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowExecutionTasksAsync(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the executions of a Maintenance Window (meaning, information about when
         * the Maintenance Window was scheduled to be active and information about tasks
         * registered and run with the Maintenance Window).</p>
         */
        virtual Model::DescribeMaintenanceWindowExecutionsOutcome DescribeMaintenanceWindowExecutions(const Model::DescribeMaintenanceWindowExecutionsRequest& request) const;

        /**
         * <p>Lists the executions of a Maintenance Window (meaning, information about when
         * the Maintenance Window was scheduled to be active and information about tasks
         * registered and run with the Maintenance Window).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowExecutionsOutcomeCallable DescribeMaintenanceWindowExecutionsCallable(const Model::DescribeMaintenanceWindowExecutionsRequest& request) const;

        /**
         * <p>Lists the executions of a Maintenance Window (meaning, information about when
         * the Maintenance Window was scheduled to be active and information about tasks
         * registered and run with the Maintenance Window).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowExecutionsAsync(const Model::DescribeMaintenanceWindowExecutionsRequest& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the targets registered with the Maintenance Window.</p>
         */
        virtual Model::DescribeMaintenanceWindowTargetsOutcome DescribeMaintenanceWindowTargets(const Model::DescribeMaintenanceWindowTargetsRequest& request) const;

        /**
         * <p>Lists the targets registered with the Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowTargetsOutcomeCallable DescribeMaintenanceWindowTargetsCallable(const Model::DescribeMaintenanceWindowTargetsRequest& request) const;

        /**
         * <p>Lists the targets registered with the Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowTargetsAsync(const Model::DescribeMaintenanceWindowTargetsRequest& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tasks in a Maintenance Window.</p>
         */
        virtual Model::DescribeMaintenanceWindowTasksOutcome DescribeMaintenanceWindowTasks(const Model::DescribeMaintenanceWindowTasksRequest& request) const;

        /**
         * <p>Lists the tasks in a Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowTasksOutcomeCallable DescribeMaintenanceWindowTasksCallable(const Model::DescribeMaintenanceWindowTasksRequest& request) const;

        /**
         * <p>Lists the tasks in a Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowTasksAsync(const Model::DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the Maintenance Windows in an AWS account.</p>
         */
        virtual Model::DescribeMaintenanceWindowsOutcome DescribeMaintenanceWindows(const Model::DescribeMaintenanceWindowsRequest& request) const;

        /**
         * <p>Retrieves the Maintenance Windows in an AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceWindowsOutcomeCallable DescribeMaintenanceWindowsCallable(const Model::DescribeMaintenanceWindowsRequest& request) const;

        /**
         * <p>Retrieves the Maintenance Windows in an AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceWindowsAsync(const Model::DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a parameter.</p>
         */
        virtual Model::DescribeParametersOutcome DescribeParameters(const Model::DescribeParametersRequest& request) const;

        /**
         * <p>Get information about a parameter.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeParametersOutcomeCallable DescribeParametersCallable(const Model::DescribeParametersRequest& request) const;

        /**
         * <p>Get information about a parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeParametersAsync(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get detailed information about a particular Automation execution.</p>
         */
        virtual Model::GetAutomationExecutionOutcome GetAutomationExecution(const Model::GetAutomationExecutionRequest& request) const;

        /**
         * <p>Get detailed information about a particular Automation execution.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutomationExecutionOutcomeCallable GetAutomationExecutionCallable(const Model::GetAutomationExecutionRequest& request) const;

        /**
         * <p>Get detailed information about a particular Automation execution.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutomationExecutionAsync(const Model::GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin. </p>
         */
        virtual Model::GetCommandInvocationOutcome GetCommandInvocation(const Model::GetCommandInvocationRequest& request) const;

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommandInvocationOutcomeCallable GetCommandInvocationCallable(const Model::GetCommandInvocationRequest& request) const;

        /**
         * <p>Returns detailed information about command execution for an invocation or
         * plugin. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommandInvocationAsync(const Model::GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the contents of the specified SSM document.</p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Gets the contents of the specified SSM document.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentOutcomeCallable GetDocumentCallable(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Gets the contents of the specified SSM document.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentAsync(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Query inventory information.</p>
         */
        virtual Model::GetInventoryOutcome GetInventory(const Model::GetInventoryRequest& request) const;

        /**
         * <p>Query inventory information.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInventoryOutcomeCallable GetInventoryCallable(const Model::GetInventoryRequest& request) const;

        /**
         * <p>Query inventory information.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInventoryAsync(const Model::GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type. </p>
         */
        virtual Model::GetInventorySchemaOutcome GetInventorySchema(const Model::GetInventorySchemaRequest& request) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInventorySchemaOutcomeCallable GetInventorySchemaCallable(const Model::GetInventorySchemaRequest& request) const;

        /**
         * <p>Return a list of inventory type names for the account, or return a list of
         * attribute names for a specific Inventory item type. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInventorySchemaAsync(const Model::GetInventorySchemaRequest& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a Maintenance Window.</p>
         */
        virtual Model::GetMaintenanceWindowOutcome GetMaintenanceWindow(const Model::GetMaintenanceWindowRequest& request) const;

        /**
         * <p>Retrieves a Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowOutcomeCallable GetMaintenanceWindowCallable(const Model::GetMaintenanceWindowRequest& request) const;

        /**
         * <p>Retrieves a Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowAsync(const Model::GetMaintenanceWindowRequest& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about a specific task executed as part of a Maintenance
         * Window execution.</p>
         */
        virtual Model::GetMaintenanceWindowExecutionOutcome GetMaintenanceWindowExecution(const Model::GetMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Retrieves details about a specific task executed as part of a Maintenance
         * Window execution.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowExecutionOutcomeCallable GetMaintenanceWindowExecutionCallable(const Model::GetMaintenanceWindowExecutionRequest& request) const;

        /**
         * <p>Retrieves details about a specific task executed as part of a Maintenance
         * Window execution.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowExecutionAsync(const Model::GetMaintenanceWindowExecutionRequest& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details about a specific task executed as part of a Maintenance
         * Window execution.</p>
         */
        virtual Model::GetMaintenanceWindowExecutionTaskOutcome GetMaintenanceWindowExecutionTask(const Model::GetMaintenanceWindowExecutionTaskRequest& request) const;

        /**
         * <p>Retrieves the details about a specific task executed as part of a Maintenance
         * Window execution.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMaintenanceWindowExecutionTaskOutcomeCallable GetMaintenanceWindowExecutionTaskCallable(const Model::GetMaintenanceWindowExecutionTaskRequest& request) const;

        /**
         * <p>Retrieves the details about a specific task executed as part of a Maintenance
         * Window execution.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMaintenanceWindowExecutionTaskAsync(const Model::GetMaintenanceWindowExecutionTaskRequest& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Query a list of all parameters used by the AWS account.</p>
         */
        virtual Model::GetParameterHistoryOutcome GetParameterHistory(const Model::GetParameterHistoryRequest& request) const;

        /**
         * <p>Query a list of all parameters used by the AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParameterHistoryOutcomeCallable GetParameterHistoryCallable(const Model::GetParameterHistoryRequest& request) const;

        /**
         * <p>Query a list of all parameters used by the AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParameterHistoryAsync(const Model::GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list of parameters used by the AWS account.&gt;</p>
         */
        virtual Model::GetParametersOutcome GetParameters(const Model::GetParametersRequest& request) const;

        /**
         * <p>Get a list of parameters used by the AWS account.&gt;</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetParametersOutcomeCallable GetParametersCallable(const Model::GetParametersRequest& request) const;

        /**
         * <p>Get a list of parameters used by the AWS account.&gt;</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetParametersAsync(const Model::GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the associations for the specified SSM document or instance.</p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

        /**
         * <p>Lists the associations for the specified SSM document or instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const Model::ListAssociationsRequest& request) const;

        /**
         * <p>Lists the associations for the specified SSM document or instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociationsAsync(const Model::ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user executes SendCommand against three instances, then a
         * command invocation is created for each requested instance ID.
         * ListCommandInvocations provide status about command execution.</p>
         */
        virtual Model::ListCommandInvocationsOutcome ListCommandInvocations(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user executes SendCommand against three instances, then a
         * command invocation is created for each requested instance ID.
         * ListCommandInvocations provide status about command execution.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCommandInvocationsOutcomeCallable ListCommandInvocationsCallable(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user executes SendCommand against three instances, then a
         * command invocation is created for each requested instance ID.
         * ListCommandInvocations provide status about command execution.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCommandInvocationsAsync(const Model::ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p>
         */
        virtual Model::ListCommandsOutcome ListCommands(const Model::ListCommandsRequest& request) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCommandsOutcomeCallable ListCommandsCallable(const Model::ListCommandsRequest& request) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCommandsAsync(const Model::ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all versions for a document.</p>
         */
        virtual Model::ListDocumentVersionsOutcome ListDocumentVersions(const Model::ListDocumentVersionsRequest& request) const;

        /**
         * <p>List all versions for a document.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentVersionsOutcomeCallable ListDocumentVersionsCallable(const Model::ListDocumentVersionsRequest& request) const;

        /**
         * <p>List all versions for a document.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentVersionsAsync(const Model::ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your SSM documents.</p>
         */
        virtual Model::ListDocumentsOutcome ListDocuments(const Model::ListDocumentsRequest& request) const;

        /**
         * <p>Describes one or more of your SSM documents.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentsOutcomeCallable ListDocumentsCallable(const Model::ListDocumentsRequest& request) const;

        /**
         * <p>Describes one or more of your SSM documents.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentsAsync(const Model::ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of inventory items returned by the request.</p>
         */
        virtual Model::ListInventoryEntriesOutcome ListInventoryEntries(const Model::ListInventoryEntriesRequest& request) const;

        /**
         * <p>A list of inventory items returned by the request.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInventoryEntriesOutcomeCallable ListInventoryEntriesCallable(const Model::ListInventoryEntriesRequest& request) const;

        /**
         * <p>A list of inventory items returned by the request.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInventoryEntriesAsync(const Model::ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Share a document publicly or privately. If you share a document privately,
         * you must specify the AWS user account IDs for those people who can use the
         * document. If you share a document publicly, you must specify <i>All</i> as the
         * account ID.</p>
         */
        virtual Model::ModifyDocumentPermissionOutcome ModifyDocumentPermission(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * <p>Share a document publicly or privately. If you share a document privately,
         * you must specify the AWS user account IDs for those people who can use the
         * document. If you share a document publicly, you must specify <i>All</i> as the
         * account ID.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDocumentPermissionOutcomeCallable ModifyDocumentPermissionCallable(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * <p>Share a document publicly or privately. If you share a document privately,
         * you must specify the AWS user account IDs for those people who can use the
         * document. If you share a document publicly, you must specify <i>All</i> as the
         * account ID.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDocumentPermissionAsync(const Model::ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Bulk update custom inventory items on one more instance. The request adds an
         * inventory item, if it doesn't already exist, or updates an inventory item, if it
         * does exist.</p>
         */
        virtual Model::PutInventoryOutcome PutInventory(const Model::PutInventoryRequest& request) const;

        /**
         * <p>Bulk update custom inventory items on one more instance. The request adds an
         * inventory item, if it doesn't already exist, or updates an inventory item, if it
         * does exist.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInventoryOutcomeCallable PutInventoryCallable(const Model::PutInventoryRequest& request) const;

        /**
         * <p>Bulk update custom inventory items on one more instance. The request adds an
         * inventory item, if it doesn't already exist, or updates an inventory item, if it
         * does exist.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInventoryAsync(const Model::PutInventoryRequest& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add one or more paramaters to the system.</p>
         */
        virtual Model::PutParameterOutcome PutParameter(const Model::PutParameterRequest& request) const;

        /**
         * <p>Add one or more paramaters to the system.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutParameterOutcomeCallable PutParameterCallable(const Model::PutParameterRequest& request) const;

        /**
         * <p>Add one or more paramaters to the system.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutParameterAsync(const Model::PutParameterRequest& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a target with a Maintenance Window.</p>
         */
        virtual Model::RegisterTargetWithMaintenanceWindowOutcome RegisterTargetWithMaintenanceWindow(const Model::RegisterTargetWithMaintenanceWindowRequest& request) const;

        /**
         * <p>Registers a target with a Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTargetWithMaintenanceWindowOutcomeCallable RegisterTargetWithMaintenanceWindowCallable(const Model::RegisterTargetWithMaintenanceWindowRequest& request) const;

        /**
         * <p>Registers a target with a Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTargetWithMaintenanceWindowAsync(const Model::RegisterTargetWithMaintenanceWindowRequest& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new task to a Maintenance Window.</p>
         */
        virtual Model::RegisterTaskWithMaintenanceWindowOutcome RegisterTaskWithMaintenanceWindow(const Model::RegisterTaskWithMaintenanceWindowRequest& request) const;

        /**
         * <p>Adds a new task to a Maintenance Window.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterTaskWithMaintenanceWindowOutcomeCallable RegisterTaskWithMaintenanceWindowCallable(const Model::RegisterTaskWithMaintenanceWindowRequest& request) const;

        /**
         * <p>Adds a new task to a Maintenance Window.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterTaskWithMaintenanceWindowAsync(const Model::RegisterTaskWithMaintenanceWindowRequest& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes all tags from the specified resource.</p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes all tags from the specified resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes all tags from the specified resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Executes commands on one or more remote instances.</p>
         */
        virtual Model::SendCommandOutcome SendCommand(const Model::SendCommandRequest& request) const;

        /**
         * <p>Executes commands on one or more remote instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendCommandOutcomeCallable SendCommandCallable(const Model::SendCommandRequest& request) const;

        /**
         * <p>Executes commands on one or more remote instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendCommandAsync(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates execution of an Automation document.</p>
         */
        virtual Model::StartAutomationExecutionOutcome StartAutomationExecution(const Model::StartAutomationExecutionRequest& request) const;

        /**
         * <p>Initiates execution of an Automation document.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAutomationExecutionOutcomeCallable StartAutomationExecutionCallable(const Model::StartAutomationExecutionRequest& request) const;

        /**
         * <p>Initiates execution of an Automation document.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAutomationExecutionAsync(const Model::StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stop an Automation that is currently executing.</p>
         */
        virtual Model::StopAutomationExecutionOutcome StopAutomationExecution(const Model::StopAutomationExecutionRequest& request) const;

        /**
         * <p>Stop an Automation that is currently executing.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAutomationExecutionOutcomeCallable StopAutomationExecutionCallable(const Model::StopAutomationExecutionRequest& request) const;

        /**
         * <p>Stop an Automation that is currently executing.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAutomationExecutionAsync(const Model::StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an association. You can only update the document version, schedule,
         * parameters, and Amazon S3 output of an association.</p>
         */
        virtual Model::UpdateAssociationOutcome UpdateAssociation(const Model::UpdateAssociationRequest& request) const;

        /**
         * <p>Updates an association. You can only update the document version, schedule,
         * parameters, and Amazon S3 output of an association.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssociationOutcomeCallable UpdateAssociationCallable(const Model::UpdateAssociationRequest& request) const;

        /**
         * <p>Updates an association. You can only update the document version, schedule,
         * parameters, and Amazon S3 output of an association.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssociationAsync(const Model::UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the SSM document associated with the specified
         * instance.</p>
         */
        virtual Model::UpdateAssociationStatusOutcome UpdateAssociationStatus(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * <p>Updates the status of the SSM document associated with the specified
         * instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssociationStatusOutcomeCallable UpdateAssociationStatusCallable(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * <p>Updates the status of the SSM document associated with the specified
         * instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssociationStatusAsync(const Model::UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The document you want to update.</p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;

        /**
         * <p>The document you want to update.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentOutcomeCallable UpdateDocumentCallable(const Model::UpdateDocumentRequest& request) const;

        /**
         * <p>The document you want to update.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentAsync(const Model::UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the default version of a document. </p>
         */
        virtual Model::UpdateDocumentDefaultVersionOutcome UpdateDocumentDefaultVersion(const Model::UpdateDocumentDefaultVersionRequest& request) const;

        /**
         * <p>Set the default version of a document. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentDefaultVersionOutcomeCallable UpdateDocumentDefaultVersionCallable(const Model::UpdateDocumentDefaultVersionRequest& request) const;

        /**
         * <p>Set the default version of a document. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentDefaultVersionAsync(const Model::UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Maintenance Window. Only specified parameters are
         * modified.</p>
         */
        virtual Model::UpdateMaintenanceWindowOutcome UpdateMaintenanceWindow(const Model::UpdateMaintenanceWindowRequest& request) const;

        /**
         * <p>Updates an existing Maintenance Window. Only specified parameters are
         * modified.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceWindowOutcomeCallable UpdateMaintenanceWindowCallable(const Model::UpdateMaintenanceWindowRequest& request) const;

        /**
         * <p>Updates an existing Maintenance Window. Only specified parameters are
         * modified.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceWindowAsync(const Model::UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p>
         */
        virtual Model::UpdateManagedInstanceRoleOutcome UpdateManagedInstanceRole(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateManagedInstanceRoleOutcomeCallable UpdateManagedInstanceRoleCallable(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateManagedInstanceRoleAsync(const Model::UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelCommandAsyncHelper(const Model::CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateActivationAsyncHelper(const Model::CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssociationAsyncHelper(const Model::CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssociationBatchAsyncHelper(const Model::CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDocumentAsyncHelper(const Model::CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMaintenanceWindowAsyncHelper(const Model::CreateMaintenanceWindowRequest& request, const CreateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteActivationAsyncHelper(const Model::DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssociationAsyncHelper(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDocumentAsyncHelper(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMaintenanceWindowAsyncHelper(const Model::DeleteMaintenanceWindowRequest& request, const DeleteMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteParameterAsyncHelper(const Model::DeleteParameterRequest& request, const DeleteParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterManagedInstanceAsyncHelper(const Model::DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterTargetFromMaintenanceWindowAsyncHelper(const Model::DeregisterTargetFromMaintenanceWindowRequest& request, const DeregisterTargetFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterTaskFromMaintenanceWindowAsyncHelper(const Model::DeregisterTaskFromMaintenanceWindowRequest& request, const DeregisterTaskFromMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActivationsAsyncHelper(const Model::DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssociationAsyncHelper(const Model::DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutomationExecutionsAsyncHelper(const Model::DescribeAutomationExecutionsRequest& request, const DescribeAutomationExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentAsyncHelper(const Model::DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentPermissionAsyncHelper(const Model::DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEffectiveInstanceAssociationsAsyncHelper(const Model::DescribeEffectiveInstanceAssociationsRequest& request, const DescribeEffectiveInstanceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceAssociationsStatusAsyncHelper(const Model::DescribeInstanceAssociationsStatusRequest& request, const DescribeInstanceAssociationsStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceInformationAsyncHelper(const Model::DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowExecutionTaskInvocationsAsyncHelper(const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request, const DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowExecutionTasksAsyncHelper(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request, const DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowExecutionsAsyncHelper(const Model::DescribeMaintenanceWindowExecutionsRequest& request, const DescribeMaintenanceWindowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowTargetsAsyncHelper(const Model::DescribeMaintenanceWindowTargetsRequest& request, const DescribeMaintenanceWindowTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowTasksAsyncHelper(const Model::DescribeMaintenanceWindowTasksRequest& request, const DescribeMaintenanceWindowTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMaintenanceWindowsAsyncHelper(const Model::DescribeMaintenanceWindowsRequest& request, const DescribeMaintenanceWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeParametersAsyncHelper(const Model::DescribeParametersRequest& request, const DescribeParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAutomationExecutionAsyncHelper(const Model::GetAutomationExecutionRequest& request, const GetAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCommandInvocationAsyncHelper(const Model::GetCommandInvocationRequest& request, const GetCommandInvocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDocumentAsyncHelper(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInventoryAsyncHelper(const Model::GetInventoryRequest& request, const GetInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInventorySchemaAsyncHelper(const Model::GetInventorySchemaRequest& request, const GetInventorySchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMaintenanceWindowAsyncHelper(const Model::GetMaintenanceWindowRequest& request, const GetMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMaintenanceWindowExecutionAsyncHelper(const Model::GetMaintenanceWindowExecutionRequest& request, const GetMaintenanceWindowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMaintenanceWindowExecutionTaskAsyncHelper(const Model::GetMaintenanceWindowExecutionTaskRequest& request, const GetMaintenanceWindowExecutionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetParameterHistoryAsyncHelper(const Model::GetParameterHistoryRequest& request, const GetParameterHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetParametersAsyncHelper(const Model::GetParametersRequest& request, const GetParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociationsAsyncHelper(const Model::ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCommandInvocationsAsyncHelper(const Model::ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCommandsAsyncHelper(const Model::ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentVersionsAsyncHelper(const Model::ListDocumentVersionsRequest& request, const ListDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentsAsyncHelper(const Model::ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInventoryEntriesAsyncHelper(const Model::ListInventoryEntriesRequest& request, const ListInventoryEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDocumentPermissionAsyncHelper(const Model::ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutInventoryAsyncHelper(const Model::PutInventoryRequest& request, const PutInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutParameterAsyncHelper(const Model::PutParameterRequest& request, const PutParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTargetWithMaintenanceWindowAsyncHelper(const Model::RegisterTargetWithMaintenanceWindowRequest& request, const RegisterTargetWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterTaskWithMaintenanceWindowAsyncHelper(const Model::RegisterTaskWithMaintenanceWindowRequest& request, const RegisterTaskWithMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendCommandAsyncHelper(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartAutomationExecutionAsyncHelper(const Model::StartAutomationExecutionRequest& request, const StartAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopAutomationExecutionAsyncHelper(const Model::StopAutomationExecutionRequest& request, const StopAutomationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssociationAsyncHelper(const Model::UpdateAssociationRequest& request, const UpdateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssociationStatusAsyncHelper(const Model::UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentAsyncHelper(const Model::UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentDefaultVersionAsyncHelper(const Model::UpdateDocumentDefaultVersionRequest& request, const UpdateDocumentDefaultVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMaintenanceWindowAsyncHelper(const Model::UpdateMaintenanceWindowRequest& request, const UpdateMaintenanceWindowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateManagedInstanceRoleAsyncHelper(const Model::UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace SSM
} // namespace Aws
