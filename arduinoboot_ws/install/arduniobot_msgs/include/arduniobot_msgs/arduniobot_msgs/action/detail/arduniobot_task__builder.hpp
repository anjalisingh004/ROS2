// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arduniobot_msgs:action/ArduniobotTask.idl
// generated code does not contain a copyright notice

#ifndef ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__BUILDER_HPP_
#define ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arduniobot_msgs/action/detail/arduniobot_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arduniobot_msgs
{

namespace action
{

namespace builder
{

class Init_ArduniobotTask_Goal_task_number
{
public:
  Init_ArduniobotTask_Goal_task_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduniobot_msgs::action::ArduniobotTask_Goal task_number(::arduniobot_msgs::action::ArduniobotTask_Goal::_task_number_type arg)
  {
    msg_.task_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduniobot_msgs::action::ArduniobotTask_Goal>()
{
  return arduniobot_msgs::action::builder::Init_ArduniobotTask_Goal_task_number();
}

}  // namespace arduniobot_msgs


namespace arduniobot_msgs
{

namespace action
{

namespace builder
{

class Init_ArduniobotTask_Result_success
{
public:
  Init_ArduniobotTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduniobot_msgs::action::ArduniobotTask_Result success(::arduniobot_msgs::action::ArduniobotTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduniobot_msgs::action::ArduniobotTask_Result>()
{
  return arduniobot_msgs::action::builder::Init_ArduniobotTask_Result_success();
}

}  // namespace arduniobot_msgs


namespace arduniobot_msgs
{

namespace action
{

namespace builder
{

class Init_ArduniobotTask_Feedback_percentage
{
public:
  Init_ArduniobotTask_Feedback_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduniobot_msgs::action::ArduniobotTask_Feedback percentage(::arduniobot_msgs::action::ArduniobotTask_Feedback::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduniobot_msgs::action::ArduniobotTask_Feedback>()
{
  return arduniobot_msgs::action::builder::Init_ArduniobotTask_Feedback_percentage();
}

}  // namespace arduniobot_msgs


namespace arduniobot_msgs
{

namespace action
{

namespace builder
{

class Init_ArduniobotTask_SendGoal_Request_goal
{
public:
  explicit Init_ArduniobotTask_SendGoal_Request_goal(::arduniobot_msgs::action::ArduniobotTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::arduniobot_msgs::action::ArduniobotTask_SendGoal_Request goal(::arduniobot_msgs::action::ArduniobotTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_SendGoal_Request msg_;
};

class Init_ArduniobotTask_SendGoal_Request_goal_id
{
public:
  Init_ArduniobotTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduniobotTask_SendGoal_Request_goal goal_id(::arduniobot_msgs::action::ArduniobotTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArduniobotTask_SendGoal_Request_goal(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduniobot_msgs::action::ArduniobotTask_SendGoal_Request>()
{
  return arduniobot_msgs::action::builder::Init_ArduniobotTask_SendGoal_Request_goal_id();
}

}  // namespace arduniobot_msgs


namespace arduniobot_msgs
{

namespace action
{

namespace builder
{

class Init_ArduniobotTask_SendGoal_Response_stamp
{
public:
  explicit Init_ArduniobotTask_SendGoal_Response_stamp(::arduniobot_msgs::action::ArduniobotTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::arduniobot_msgs::action::ArduniobotTask_SendGoal_Response stamp(::arduniobot_msgs::action::ArduniobotTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_SendGoal_Response msg_;
};

class Init_ArduniobotTask_SendGoal_Response_accepted
{
public:
  Init_ArduniobotTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduniobotTask_SendGoal_Response_stamp accepted(::arduniobot_msgs::action::ArduniobotTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ArduniobotTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduniobot_msgs::action::ArduniobotTask_SendGoal_Response>()
{
  return arduniobot_msgs::action::builder::Init_ArduniobotTask_SendGoal_Response_accepted();
}

}  // namespace arduniobot_msgs


namespace arduniobot_msgs
{

namespace action
{

namespace builder
{

class Init_ArduniobotTask_GetResult_Request_goal_id
{
public:
  Init_ArduniobotTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arduniobot_msgs::action::ArduniobotTask_GetResult_Request goal_id(::arduniobot_msgs::action::ArduniobotTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduniobot_msgs::action::ArduniobotTask_GetResult_Request>()
{
  return arduniobot_msgs::action::builder::Init_ArduniobotTask_GetResult_Request_goal_id();
}

}  // namespace arduniobot_msgs


namespace arduniobot_msgs
{

namespace action
{

namespace builder
{

class Init_ArduniobotTask_GetResult_Response_result
{
public:
  explicit Init_ArduniobotTask_GetResult_Response_result(::arduniobot_msgs::action::ArduniobotTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::arduniobot_msgs::action::ArduniobotTask_GetResult_Response result(::arduniobot_msgs::action::ArduniobotTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_GetResult_Response msg_;
};

class Init_ArduniobotTask_GetResult_Response_status
{
public:
  Init_ArduniobotTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduniobotTask_GetResult_Response_result status(::arduniobot_msgs::action::ArduniobotTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ArduniobotTask_GetResult_Response_result(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduniobot_msgs::action::ArduniobotTask_GetResult_Response>()
{
  return arduniobot_msgs::action::builder::Init_ArduniobotTask_GetResult_Response_status();
}

}  // namespace arduniobot_msgs


namespace arduniobot_msgs
{

namespace action
{

namespace builder
{

class Init_ArduniobotTask_FeedbackMessage_feedback
{
public:
  explicit Init_ArduniobotTask_FeedbackMessage_feedback(::arduniobot_msgs::action::ArduniobotTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::arduniobot_msgs::action::ArduniobotTask_FeedbackMessage feedback(::arduniobot_msgs::action::ArduniobotTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_FeedbackMessage msg_;
};

class Init_ArduniobotTask_FeedbackMessage_goal_id
{
public:
  Init_ArduniobotTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduniobotTask_FeedbackMessage_feedback goal_id(::arduniobot_msgs::action::ArduniobotTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArduniobotTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::arduniobot_msgs::action::ArduniobotTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::arduniobot_msgs::action::ArduniobotTask_FeedbackMessage>()
{
  return arduniobot_msgs::action::builder::Init_ArduniobotTask_FeedbackMessage_goal_id();
}

}  // namespace arduniobot_msgs

#endif  // ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__BUILDER_HPP_
