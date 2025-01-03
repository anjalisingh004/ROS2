// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arduniobot_msgs:action/ArduniobotTask.idl
// generated code does not contain a copyright notice

#ifndef ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__STRUCT_H_
#define ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ArduniobotTask in the package arduniobot_msgs.
typedef struct arduniobot_msgs__action__ArduniobotTask_Goal
{
  int32_t task_number;
} arduniobot_msgs__action__ArduniobotTask_Goal;

// Struct for a sequence of arduniobot_msgs__action__ArduniobotTask_Goal.
typedef struct arduniobot_msgs__action__ArduniobotTask_Goal__Sequence
{
  arduniobot_msgs__action__ArduniobotTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduniobot_msgs__action__ArduniobotTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ArduniobotTask in the package arduniobot_msgs.
typedef struct arduniobot_msgs__action__ArduniobotTask_Result
{
  bool success;
} arduniobot_msgs__action__ArduniobotTask_Result;

// Struct for a sequence of arduniobot_msgs__action__ArduniobotTask_Result.
typedef struct arduniobot_msgs__action__ArduniobotTask_Result__Sequence
{
  arduniobot_msgs__action__ArduniobotTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduniobot_msgs__action__ArduniobotTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ArduniobotTask in the package arduniobot_msgs.
typedef struct arduniobot_msgs__action__ArduniobotTask_Feedback
{
  int32_t percentage;
} arduniobot_msgs__action__ArduniobotTask_Feedback;

// Struct for a sequence of arduniobot_msgs__action__ArduniobotTask_Feedback.
typedef struct arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence
{
  arduniobot_msgs__action__ArduniobotTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "arduniobot_msgs/action/detail/arduniobot_task__struct.h"

/// Struct defined in action/ArduniobotTask in the package arduniobot_msgs.
typedef struct arduniobot_msgs__action__ArduniobotTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  arduniobot_msgs__action__ArduniobotTask_Goal goal;
} arduniobot_msgs__action__ArduniobotTask_SendGoal_Request;

// Struct for a sequence of arduniobot_msgs__action__ArduniobotTask_SendGoal_Request.
typedef struct arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence
{
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ArduniobotTask in the package arduniobot_msgs.
typedef struct arduniobot_msgs__action__ArduniobotTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} arduniobot_msgs__action__ArduniobotTask_SendGoal_Response;

// Struct for a sequence of arduniobot_msgs__action__ArduniobotTask_SendGoal_Response.
typedef struct arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence
{
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ArduniobotTask in the package arduniobot_msgs.
typedef struct arduniobot_msgs__action__ArduniobotTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} arduniobot_msgs__action__ArduniobotTask_GetResult_Request;

// Struct for a sequence of arduniobot_msgs__action__ArduniobotTask_GetResult_Request.
typedef struct arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence
{
  arduniobot_msgs__action__ArduniobotTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "arduniobot_msgs/action/detail/arduniobot_task__struct.h"

/// Struct defined in action/ArduniobotTask in the package arduniobot_msgs.
typedef struct arduniobot_msgs__action__ArduniobotTask_GetResult_Response
{
  int8_t status;
  arduniobot_msgs__action__ArduniobotTask_Result result;
} arduniobot_msgs__action__ArduniobotTask_GetResult_Response;

// Struct for a sequence of arduniobot_msgs__action__ArduniobotTask_GetResult_Response.
typedef struct arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence
{
  arduniobot_msgs__action__ArduniobotTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "arduniobot_msgs/action/detail/arduniobot_task__struct.h"

/// Struct defined in action/ArduniobotTask in the package arduniobot_msgs.
typedef struct arduniobot_msgs__action__ArduniobotTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  arduniobot_msgs__action__ArduniobotTask_Feedback feedback;
} arduniobot_msgs__action__ArduniobotTask_FeedbackMessage;

// Struct for a sequence of arduniobot_msgs__action__ArduniobotTask_FeedbackMessage.
typedef struct arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence
{
  arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__STRUCT_H_
