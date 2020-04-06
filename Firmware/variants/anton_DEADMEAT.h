#ifndef VARIANT_ANTON_H
#define VARIANT_ANTON_H

/*------------------------------------
 MODDING SETTINGS
 *------------------------------------*/
//#define BONDTECH_EXTRUDER
#define STEPPER_X_09
#define STEPPER_Y_09

#include "1_75mm_MK3S-EINSy10a-E3Dv6full.h"


// ===================== Anton's personal overrides ======================
#ifdef STEPPER_X_09
  #define TMC2130_PWM_GRAD_X  4         // PWMCONF
  #define TMC2130_PWM_AMPL_X  235       // PWMCONF
#else
  #define TMC2130_PWM_GRAD_X  2         // PWMCONF
  #define TMC2130_PWM_AMPL_X  230       // PWMCONF
#endif
#define TMC2130_PWM_AUTO_X  1         // PWMCONF
#define TMC2130_PWM_FREQ_X  2         // PWMCONF

#ifdef STEPPER_Y_09
  #define TMC2130_PWM_GRAD_Y  4         // PWMCONF
  #define TMC2130_PWM_AMPL_Y  240       // PWMCONF
#else
  #define TMC2130_PWM_GRAD_Y  2         // PWMCONF
  #define TMC2130_PWM_AMPL_Y  235       // PWMCONF
#endif
#define TMC2130_PWM_AUTO_Y  1         // PWMCONF
#define TMC2130_PWM_FREQ_Y  2         // PWMCONF

#define TMC2130_PWM_GRAD_Z  4         // PWMCONF
#define TMC2130_PWM_AMPL_Z  200       // PWMCONF
#define TMC2130_PWM_AUTO_Z  1         // PWMCONF
#define TMC2130_PWM_FREQ_Z  2         // PWMCONF

#define TMC2130_PWM_GRAD_E  4         // PWMCONF
#define TMC2130_PWM_AMPL_E  240       // PWMCONF
#define TMC2130_PWM_AUTO_E  1         // PWMCONF
#define TMC2130_PWM_FREQ_E  2         // PWMCONF

// chopper defines with adjustments for 0.9 motors on x y z e
//#define TMC2130_TOFF_E      3         // CHOPCONF // fchop = 27.778kHz
//#define TMC2130_TOFF_E      4         // CHOPCONF // fchop = 21.429kHz
//#define TMC2130_TOFF_E      5         // CHOPCONF // fchop = 17.442kHz

#ifdef STEPPER_X_09
  #define TMC2130_TOFF_X 2 // adjusted for 0.9 degree motors
  #define TMC2130_HSTR_X 1
  #define TMC2130_HEND_X -2
  #define TMC2130_TBL_X 2
  #define TMC2130_RES_X 0
#else
  #define TMC2130_TOFF_X 3 // Prusa defaults X
  #define TMC2130_HSTR_X 5
  #define TMC2130_HEND_X 1
  #define TMC2130_TBL_X 2
  #define TMC2130_RES_X 0
#endif

#ifdef STEPPER_Y_09
  #define TMC2130_TOFF_Y 2 // adjusted for 0.9 degree motors
  #define TMC2130_HSTR_Y 1
  #define TMC2130_HEND_Y -2
  #define TMC2130_TBL_Y 2
  #define TMC2130_RES_Y 0
#else
  #define TMC2130_TOFF_Y 3 // Prusa defaults Y
  #define TMC2130_HSTR_Y 5
  #define TMC2130_HEND_Y 1
  #define TMC2130_TBL_Y 2
  #define TMC2130_RES_Y 0
#endif

#ifdef STEPPER_Z_09
  #define TMC2130_TOFF_Z 2 // adjusted for 0.9 degree motors
  #define TMC2130_HSTR_Z 2
  #define TMC2130_HEND_Z 0
  #define TMC2130_TBL_Z 2
  #define TMC2130_RES_Z 0
#else
  #define TMC2130_TOFF_Z 3 // Prusa defaults Z
  #define TMC2130_HSTR_Z 5
  #define TMC2130_HEND_Z 1
  #define TMC2130_TBL_Z 2
  #define TMC2130_RES_Z 0
#endif

#ifdef STEPPER_E_09
  #define TMC2130_TOFF_E 2 // adjusted for 0.9 degree motors
  #define TMC2130_HSTR_E 2
  #define TMC2130_HEND_E 0
  #define TMC2130_TBL_E 2
  #define TMC2130_RES_E 0
#else
  #define TMC2130_TOFF_E 3 // Prusa defaults E
  #define TMC2130_HSTR_E 5
  #define TMC2130_HEND_E 1
  #define TMC2130_TBL_E 2
  #define TMC2130_RES_E 0
#endif
//end chopper defines

//#define TMC2130_STEALTH_E // Extruder stealthChop mode
//#define TMC2130_CNSTOFF_E // Extruder constant-off-time mode (similar to MK2)

//#define TMC2130_PWM_DIV   683         // PWM frequency divider (1024, 683, 512, 410)
#define TMC2130_PWM_DIV   512         // PWM frequency divider (1024, 683, 512, 410)
#define TMC2130_PWM_CLK   (2 * TMC2130_FCLK / TMC2130_PWM_DIV) // PWM frequency (23.4kHz, 35.1kHz, 46.9kHz, 58.5kHz for 12MHz fclk)

#define TMC2130_TPWMTHRS  0         // TPWMTHRS - Sets the switching speed threshold based on TSTEP from stealthChop to spreadCycle mode
#define TMC2130_THIGH     0         // THIGH - unused

//#define TMC2130_TCOOLTHRS_X 450       // TCOOLTHRS - coolstep treshold
//#define TMC2130_TCOOLTHRS_Y 450       // TCOOLTHRS - coolstep treshold
#define TMC2130_TCOOLTHRS_X 430       // TCOOLTHRS - coolstep treshold
#define TMC2130_TCOOLTHRS_Y 430       // TCOOLTHRS - coolstep treshold
#define TMC2130_TCOOLTHRS_Z 500       // TCOOLTHRS - coolstep treshold
#define TMC2130_TCOOLTHRS_E 500       // TCOOLTHRS - coolstep treshold

#define TMC2130_SG_HOMING       1     // stallguard homing

#ifdef STEPPER_X_09 // stallguard homing settings
  #define TMC2130_SG_THRS_X       0
  #define TMC2130_SG_THRS_X_HOME  0
#else
  #define TMC2130_SG_THRS_X       3    // std stallguard sensitivity for X axis
  #define TMC2130_SG_THRS_X_HOME  3    // std homing stallguard threshold for X axis
#endif

#ifdef STEPPER_Y_09
  #define TMC2130_SG_THRS_Y       0
  #define TMC2130_SG_THRS_Y_HOME  0
#else
  #define TMC2130_SG_THRS_Y       3    // std stallguard sensitivity for Y axis
  #define TMC2130_SG_THRS_Y_HOME  3    // std homing stallguard threshold for Y axis
#endif

#define TMC2130_SG_THRS_Z       4     // stallguard sensitivity for Z axis
#define TMC2130_SG_THRS_Z_HOME  4     // stallguard sensitivity for Z axis
#define TMC2130_SG_THRS_E       3     // stallguard sensitivity for E axis
#define TMC2130_SG_THRS_E_HOME  3     // stallguard sensitivity for E axis

//new settings is possible for vsense = 1, running current value > 31 set vsense to zero and shift both currents by 1 bit right (Z axis only)
#ifdef STEPPER_X_09
  #define X_AXIS_CURRENT 25
#else
  #define X_AXIS_CURRENT 16
#endif
#ifdef STEPPER_Y_09
  #define Y_AXIS_CURRENT 25
#else
  #define Y_AXIS_CURRENT 20
#endif
#define TMC2130_CURRENTS_H {X_AXIS_CURRENT, Y_AXIS_CURRENT, 37, 27}  // default holding currents for all axes
#define TMC2130_CURRENTS_R {X_AXIS_CURRENT, Y_AXIS_CURRENT, 37, 27}  // default running currents for all axes

#endif //__VARIANT_ANTON_H
