#ifndef __COMMON_H__202D5AF2_41B1_4B7D_B6FA_F1094FEBBBB9
#define __COMMON_H__202D5AF2_41B1_4B7D_B6FA_F1094FEBBBB9


/*
 * struct config_t - options passed to the application.
*/
typedef struct {
	char *file_pattern;
	char *file_target;
	uint64_t frame_start;
	uint64_t frame_stop;
	uint64_t start_t;
	uint64_t delta_t;
	int thresh;
	bool warn_only;
} config_t;


/*
 * struct dvs_event_t - event representation.
 */
typedef struct {
	uint8_t polarity;
	uint16_t x, y;
	uint64_t t;
} dvs_event_t;


#endif /* __COMMON_H__202D5AF2_41B1_4B7D_B6FA_F1094FEBBBB9 */

