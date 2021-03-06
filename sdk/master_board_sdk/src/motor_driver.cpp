#include <stdio.h>
#include "master_board_sdk/motor_driver.h"

MotorDriver::MotorDriver()
{
  enable = false;
  enable_position_rollover_error = false;
  timeout = 0;
}

void MotorDriver::SetMotors(Motor *motor1, Motor *motor2)
{
  this->motor1 = motor1;
  this->motor2 = motor2;
}

void MotorDriver::Print()
{
  printf("Enabled:%d ", is_enabled);
  printf("Error:%d ", error_code);
  printf("\n");
}

void MotorDriver::Enable()
{
  enable = true;
}

void MotorDriver::Disable()
{
  enable = false;
}

void MotorDriver::EnablePositionRolloverError()
{
  enable_position_rollover_error = true;
}
void MotorDriver::DisablePositionRolloverError()
{
  enable_position_rollover_error = false;
}
void MotorDriver::SetTimeout(uint8_t time)
{
  timeout = time;
}
