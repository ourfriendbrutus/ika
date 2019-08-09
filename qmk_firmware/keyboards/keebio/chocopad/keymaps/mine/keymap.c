#include QMK_KEYBOARD_H

enum custom_keycodes {
  JIRANOFORMAT = SAFE_RANGE,
  JIRACODE,
  JIRAQUOTE,
  SWTICKET,
  SWINSTALLED,
  TIMEKEEP
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case JIRANOFORMAT:
      if (record->event.pressed) {
        // when keycode JIRANOFORMAT is pressed
        SEND_STRING("{noformat}");
      } else {
        // when keycode JIRANOFORMAT is released
      }
      break;
    case JIRACODE:
      if (record->event.pressed) {
        // when keycode JIRACODE is pressed
        SEND_STRING("{code}");
      } else {
        // when keycode JIRACODE is released
      }
      break;
    case JIRAQUOTE:
      if (record->event.pressed) {
        // when keycode JIRAQUOTE is pressed
       	SEND_STRING("{quote}");
        // when keycode JIRAQUOTE is released
      }
      break;
    case SWTICKET:
      if (record->event.pressed) {
        // when keycode SWTICKET is pressed
        SEND_STRING("For requests to have software installed, you'll need to resubmit this request in the SW (Software) License Allocation jira project. There is information collected in that ticket that we don't get when submitting a normal help ticket. Here's a link to submit a new ticket in the correct project: If you have any other questions, please let me know."SS_TAP(X_ENTER)SS_TAP(X_ENTER)"Thanks,"SS_TAP(X_ENTER)"Steven");
      } else {
        // when keycode SWTICKET is released
      }
      break;
    case SWINSTALLED:
      if (record->event.pressed) {
        // when keycode SWINSTALLED is pressed
        SEND_STRING("My records indicate that ______ is now installed on your computer. If you have any issues, please let me know, otherwise this ticket will be closed."SS_TAP(X_ENTER)SS_TAP(X_ENTER)"Thanks,"SS_TAP(X_ENTER)"Steven");
      } else {
        // when keycode SWINSTALLED is released
      }
      break;
    case TIMEKEEP:
      if (record->event.pressed) {
        // when keycode TIMEKEEP is pressed
        SEND_STRING("09:30"SS_TAP(X_TAB)SS_TAP(X_TAB)"13:00"SS_TAP(X_TAB)SS_TAP(X_TAB)"13:30"SS_TAP(X_TAB)SS_TAP(X_TAB)"19:00");
      } else {
        // when keycode TIMEKEEP is released
      }
      break;
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x4(
    RESET,        JIRANOFORMAT,     JIRACODE,     JIRAQUOTE, 
    SWTICKET,     JIRANOFORMAT,     JIRACODE,     JIRAQUOTE, 
    SWINSTALLED,  JIRANOFORMAT,     JIRACODE,     JIRAQUOTE, 
    TIMEKEEP,     JIRANOFORMAT,     JIRACODE,     JIRAQUOTE
  )
};