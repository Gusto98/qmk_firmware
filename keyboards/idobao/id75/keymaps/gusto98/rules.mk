OLED_DRIVER_ENABLE = no   	# Enables the use of OLED displays
ENCODER_ENABLE = no       	# Enables the use of one or more encoders
NKRO_ENABLE = yes			# Enables the use of NKRO
RGBLIGHT_ENABLE = yes      	# Enables keyboard RGB underglow
CFLAGS += -DRGBLIGHT_HUE_STEP=16 -DRGBLIGHT_SAT_STEP=16 -DRGBLIGHT_VAL_STEP=20
WPM_ENABLE = no
SPLIT_KEYBOARD = no 		# Enable defining of master side
MOUSEKEY_ENABLE = yes 		# Use Mouse Functions
EXTRAKEY_ENABLE = yes 		# Audio Control and System Control
#LTO_enable = yes
LEADER_ENABLE = no			# Enables Leader Key usage
#https://precondition.github.io/home-row-mods#finding-the-sweet-spot
BOOTMAGIC_ENABLE = no
TAP_DANCE_ENABLE				=	no	  	# Enables the tap dance feature
DYNAMIC_MACRO_ENABLE			=	no 		# Enables dynamic macros
COMMAND_ENABLE					=	yes		# Commands for debug and configuration
AUDIO_ENABLE					=	no		# Enables any onboard speakers
KEY_LOCK_ENABLE					=	no
CONSOLE_ENABLE					=	no
VELOCIKEY_ENABLE				=	no
STENO_ENABLE					=	no
TERMINAL_ENABLE					=	no
GRAVE_ESC_ENABLE				=	yes
SPACE_CADET_ENABLE				=	no
DYNAMIC_TAPPING_TERM_ENABLE 	= 	no  # enables dynamic tapping term features (DT_PRINT, DT_UP, DT_DOWN)
