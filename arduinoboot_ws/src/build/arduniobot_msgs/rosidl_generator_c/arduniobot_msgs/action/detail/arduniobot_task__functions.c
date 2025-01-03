// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arduniobot_msgs:action/ArduniobotTask.idl
// generated code does not contain a copyright notice
#include "arduniobot_msgs/action/detail/arduniobot_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
arduniobot_msgs__action__ArduniobotTask_Goal__init(arduniobot_msgs__action__ArduniobotTask_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task_number
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_Goal__fini(arduniobot_msgs__action__ArduniobotTask_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task_number
}

bool
arduniobot_msgs__action__ArduniobotTask_Goal__are_equal(const arduniobot_msgs__action__ArduniobotTask_Goal * lhs, const arduniobot_msgs__action__ArduniobotTask_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_number
  if (lhs->task_number != rhs->task_number) {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_Goal__copy(
  const arduniobot_msgs__action__ArduniobotTask_Goal * input,
  arduniobot_msgs__action__ArduniobotTask_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // task_number
  output->task_number = input->task_number;
  return true;
}

arduniobot_msgs__action__ArduniobotTask_Goal *
arduniobot_msgs__action__ArduniobotTask_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Goal * msg = (arduniobot_msgs__action__ArduniobotTask_Goal *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__action__ArduniobotTask_Goal));
  bool success = arduniobot_msgs__action__ArduniobotTask_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__action__ArduniobotTask_Goal__destroy(arduniobot_msgs__action__ArduniobotTask_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__action__ArduniobotTask_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__action__ArduniobotTask_Goal__Sequence__init(arduniobot_msgs__action__ArduniobotTask_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Goal * data = NULL;

  if (size) {
    data = (arduniobot_msgs__action__ArduniobotTask_Goal *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__action__ArduniobotTask_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__action__ArduniobotTask_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__action__ArduniobotTask_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_Goal__Sequence__fini(arduniobot_msgs__action__ArduniobotTask_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__action__ArduniobotTask_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__action__ArduniobotTask_Goal__Sequence *
arduniobot_msgs__action__ArduniobotTask_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Goal__Sequence * array = (arduniobot_msgs__action__ArduniobotTask_Goal__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__action__ArduniobotTask_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__action__ArduniobotTask_Goal__Sequence__destroy(arduniobot_msgs__action__ArduniobotTask_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__action__ArduniobotTask_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__action__ArduniobotTask_Goal__Sequence__are_equal(const arduniobot_msgs__action__ArduniobotTask_Goal__Sequence * lhs, const arduniobot_msgs__action__ArduniobotTask_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_Goal__Sequence__copy(
  const arduniobot_msgs__action__ArduniobotTask_Goal__Sequence * input,
  arduniobot_msgs__action__ArduniobotTask_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__action__ArduniobotTask_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__action__ArduniobotTask_Goal * data =
      (arduniobot_msgs__action__ArduniobotTask_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__action__ArduniobotTask_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__action__ArduniobotTask_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
arduniobot_msgs__action__ArduniobotTask_Result__init(arduniobot_msgs__action__ArduniobotTask_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_Result__fini(arduniobot_msgs__action__ArduniobotTask_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
arduniobot_msgs__action__ArduniobotTask_Result__are_equal(const arduniobot_msgs__action__ArduniobotTask_Result * lhs, const arduniobot_msgs__action__ArduniobotTask_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_Result__copy(
  const arduniobot_msgs__action__ArduniobotTask_Result * input,
  arduniobot_msgs__action__ArduniobotTask_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

arduniobot_msgs__action__ArduniobotTask_Result *
arduniobot_msgs__action__ArduniobotTask_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Result * msg = (arduniobot_msgs__action__ArduniobotTask_Result *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__action__ArduniobotTask_Result));
  bool success = arduniobot_msgs__action__ArduniobotTask_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__action__ArduniobotTask_Result__destroy(arduniobot_msgs__action__ArduniobotTask_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__action__ArduniobotTask_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__action__ArduniobotTask_Result__Sequence__init(arduniobot_msgs__action__ArduniobotTask_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Result * data = NULL;

  if (size) {
    data = (arduniobot_msgs__action__ArduniobotTask_Result *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__action__ArduniobotTask_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__action__ArduniobotTask_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__action__ArduniobotTask_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_Result__Sequence__fini(arduniobot_msgs__action__ArduniobotTask_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__action__ArduniobotTask_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__action__ArduniobotTask_Result__Sequence *
arduniobot_msgs__action__ArduniobotTask_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Result__Sequence * array = (arduniobot_msgs__action__ArduniobotTask_Result__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__action__ArduniobotTask_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__action__ArduniobotTask_Result__Sequence__destroy(arduniobot_msgs__action__ArduniobotTask_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__action__ArduniobotTask_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__action__ArduniobotTask_Result__Sequence__are_equal(const arduniobot_msgs__action__ArduniobotTask_Result__Sequence * lhs, const arduniobot_msgs__action__ArduniobotTask_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_Result__Sequence__copy(
  const arduniobot_msgs__action__ArduniobotTask_Result__Sequence * input,
  arduniobot_msgs__action__ArduniobotTask_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__action__ArduniobotTask_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__action__ArduniobotTask_Result * data =
      (arduniobot_msgs__action__ArduniobotTask_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__action__ArduniobotTask_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__action__ArduniobotTask_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
arduniobot_msgs__action__ArduniobotTask_Feedback__init(arduniobot_msgs__action__ArduniobotTask_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percentage
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_Feedback__fini(arduniobot_msgs__action__ArduniobotTask_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percentage
}

bool
arduniobot_msgs__action__ArduniobotTask_Feedback__are_equal(const arduniobot_msgs__action__ArduniobotTask_Feedback * lhs, const arduniobot_msgs__action__ArduniobotTask_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percentage
  if (lhs->percentage != rhs->percentage) {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_Feedback__copy(
  const arduniobot_msgs__action__ArduniobotTask_Feedback * input,
  arduniobot_msgs__action__ArduniobotTask_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // percentage
  output->percentage = input->percentage;
  return true;
}

arduniobot_msgs__action__ArduniobotTask_Feedback *
arduniobot_msgs__action__ArduniobotTask_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Feedback * msg = (arduniobot_msgs__action__ArduniobotTask_Feedback *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__action__ArduniobotTask_Feedback));
  bool success = arduniobot_msgs__action__ArduniobotTask_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__action__ArduniobotTask_Feedback__destroy(arduniobot_msgs__action__ArduniobotTask_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__action__ArduniobotTask_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence__init(arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Feedback * data = NULL;

  if (size) {
    data = (arduniobot_msgs__action__ArduniobotTask_Feedback *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__action__ArduniobotTask_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__action__ArduniobotTask_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__action__ArduniobotTask_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence__fini(arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__action__ArduniobotTask_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence *
arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence * array = (arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence__destroy(arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence__are_equal(const arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence * lhs, const arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence__copy(
  const arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence * input,
  arduniobot_msgs__action__ArduniobotTask_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__action__ArduniobotTask_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__action__ArduniobotTask_Feedback * data =
      (arduniobot_msgs__action__ArduniobotTask_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__action__ArduniobotTask_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__action__ArduniobotTask_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "arduniobot_msgs/action/detail/arduniobot_task__functions.h"

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__init(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!arduniobot_msgs__action__ArduniobotTask_Goal__init(&msg->goal)) {
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__fini(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  arduniobot_msgs__action__ArduniobotTask_Goal__fini(&msg->goal);
}

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__are_equal(const arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * lhs, const arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!arduniobot_msgs__action__ArduniobotTask_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__copy(
  const arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * input,
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!arduniobot_msgs__action__ArduniobotTask_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

arduniobot_msgs__action__ArduniobotTask_SendGoal_Request *
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * msg = (arduniobot_msgs__action__ArduniobotTask_SendGoal_Request *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request));
  bool success = arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__destroy(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence__init(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * data = NULL;

  if (size) {
    data = (arduniobot_msgs__action__ArduniobotTask_SendGoal_Request *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence__fini(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence *
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence * array = (arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence__destroy(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence__are_equal(const arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence * lhs, const arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence__copy(
  const arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence * input,
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Request * data =
      (arduniobot_msgs__action__ArduniobotTask_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__init(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__fini(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__are_equal(const arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * lhs, const arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__copy(
  const arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * input,
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

arduniobot_msgs__action__ArduniobotTask_SendGoal_Response *
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * msg = (arduniobot_msgs__action__ArduniobotTask_SendGoal_Response *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response));
  bool success = arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__destroy(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence__init(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * data = NULL;

  if (size) {
    data = (arduniobot_msgs__action__ArduniobotTask_SendGoal_Response *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence__fini(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence *
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence * array = (arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence__destroy(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence__are_equal(const arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence * lhs, const arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence__copy(
  const arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence * input,
  arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__action__ArduniobotTask_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__action__ArduniobotTask_SendGoal_Response * data =
      (arduniobot_msgs__action__ArduniobotTask_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__init(arduniobot_msgs__action__ArduniobotTask_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    arduniobot_msgs__action__ArduniobotTask_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__fini(arduniobot_msgs__action__ArduniobotTask_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__are_equal(const arduniobot_msgs__action__ArduniobotTask_GetResult_Request * lhs, const arduniobot_msgs__action__ArduniobotTask_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__copy(
  const arduniobot_msgs__action__ArduniobotTask_GetResult_Request * input,
  arduniobot_msgs__action__ArduniobotTask_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

arduniobot_msgs__action__ArduniobotTask_GetResult_Request *
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_GetResult_Request * msg = (arduniobot_msgs__action__ArduniobotTask_GetResult_Request *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Request));
  bool success = arduniobot_msgs__action__ArduniobotTask_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__destroy(arduniobot_msgs__action__ArduniobotTask_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__action__ArduniobotTask_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence__init(arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_GetResult_Request * data = NULL;

  if (size) {
    data = (arduniobot_msgs__action__ArduniobotTask_GetResult_Request *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__action__ArduniobotTask_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__action__ArduniobotTask_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence__fini(arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__action__ArduniobotTask_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence *
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence * array = (arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence__destroy(arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence__are_equal(const arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence * lhs, const arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence__copy(
  const arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence * input,
  arduniobot_msgs__action__ArduniobotTask_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__action__ArduniobotTask_GetResult_Request * data =
      (arduniobot_msgs__action__ArduniobotTask_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__action__ArduniobotTask_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__action__ArduniobotTask_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "arduniobot_msgs/action/detail/arduniobot_task__functions.h"

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__init(arduniobot_msgs__action__ArduniobotTask_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!arduniobot_msgs__action__ArduniobotTask_Result__init(&msg->result)) {
    arduniobot_msgs__action__ArduniobotTask_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__fini(arduniobot_msgs__action__ArduniobotTask_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  arduniobot_msgs__action__ArduniobotTask_Result__fini(&msg->result);
}

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__are_equal(const arduniobot_msgs__action__ArduniobotTask_GetResult_Response * lhs, const arduniobot_msgs__action__ArduniobotTask_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!arduniobot_msgs__action__ArduniobotTask_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__copy(
  const arduniobot_msgs__action__ArduniobotTask_GetResult_Response * input,
  arduniobot_msgs__action__ArduniobotTask_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!arduniobot_msgs__action__ArduniobotTask_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

arduniobot_msgs__action__ArduniobotTask_GetResult_Response *
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_GetResult_Response * msg = (arduniobot_msgs__action__ArduniobotTask_GetResult_Response *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Response));
  bool success = arduniobot_msgs__action__ArduniobotTask_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__destroy(arduniobot_msgs__action__ArduniobotTask_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__action__ArduniobotTask_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence__init(arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_GetResult_Response * data = NULL;

  if (size) {
    data = (arduniobot_msgs__action__ArduniobotTask_GetResult_Response *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__action__ArduniobotTask_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__action__ArduniobotTask_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence__fini(arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__action__ArduniobotTask_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence *
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence * array = (arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence__destroy(arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence__are_equal(const arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence * lhs, const arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence__copy(
  const arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence * input,
  arduniobot_msgs__action__ArduniobotTask_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__action__ArduniobotTask_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__action__ArduniobotTask_GetResult_Response * data =
      (arduniobot_msgs__action__ArduniobotTask_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__action__ArduniobotTask_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__action__ArduniobotTask_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "arduniobot_msgs/action/detail/arduniobot_task__functions.h"

bool
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__init(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!arduniobot_msgs__action__ArduniobotTask_Feedback__init(&msg->feedback)) {
    arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__fini(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  arduniobot_msgs__action__ArduniobotTask_Feedback__fini(&msg->feedback);
}

bool
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__are_equal(const arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * lhs, const arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!arduniobot_msgs__action__ArduniobotTask_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__copy(
  const arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * input,
  arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!arduniobot_msgs__action__ArduniobotTask_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

arduniobot_msgs__action__ArduniobotTask_FeedbackMessage *
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * msg = (arduniobot_msgs__action__ArduniobotTask_FeedbackMessage *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage));
  bool success = arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__destroy(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence__init(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * data = NULL;

  if (size) {
    data = (arduniobot_msgs__action__ArduniobotTask_FeedbackMessage *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence__fini(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence *
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence * array = (arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence__destroy(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence__are_equal(const arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence * lhs, const arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence__copy(
  const arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence * input,
  arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__action__ArduniobotTask_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__action__ArduniobotTask_FeedbackMessage * data =
      (arduniobot_msgs__action__ArduniobotTask_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__action__ArduniobotTask_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
