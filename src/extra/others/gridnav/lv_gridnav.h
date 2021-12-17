/**
 * @file lv_templ.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/*This typedef exists purely to keep -Wpedantic happy when the file is empty.*/
/*It can be removed.*/
typedef int _keep_pedantic_happy;

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/**********************
 *   STATIC FUNCTIONS
 **********************/
/**
 * @file lv_gridnav.h
 *
 */

#ifndef LV_GRIDFOCUS_H
#define LV_GRIDFOCUS_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../../core/lv_obj.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef enum {
    LV_GRIDNAV_CTRL_NONE = 0x0,

    /** If there is no next/previous object in a direction,
     *  the focus goes to the object in the next/previous row (on left/right keys)
     *  or first/last row (on up/down keys)
     */
    LV_GRIDNAV_CTRL_ROLLOVER = 0x1,
} lv_gridnav_ctrl_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Add grid navigation feature to an object. It expects the children to be arranged
 * into a grid-like layout. Although it's not required to have pixel perfect alignment.
 * This feature makes possible to use keys to navigate among the children and focus them.
 * The keys other than arrows and press/release related events
 * are forwarded to the focused child.
 * @param obj       pointer to an object on which navigation should be applied.
 * @param ctrl      control flags from `lv_gridnav_ctrl_t`.
 */
void lv_gridnav_add(lv_obj_t * obj, lv_gridnav_ctrl_t ctrl);

/**
 * Remove the grid navigation support from an object
 * @param obj       pointer to an object
 */
void lv_gridnav_remove(lv_obj_t * obj);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_GRIDFOCUS_H*/
