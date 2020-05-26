RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = WS2812
TAP_DANCE_ENABLE = no
# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/glcdfont.c \
        ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \

EXTRAFLAGS += -flto
OLED_DRIVER_ENABLE = yes

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no    # Breathing sleep LED during USB suspend
COMMAND_ENABLE   = no  # Commands for debug and configuration
UNICODE_ENABLE   = no  # Unicode
SWAP_HANDS_ENABLE= no  # Allow swapping hands of keyboard
MOUSEKEY_ENABLE  = no # Mouse keys(+4700)
BOOTMAGIC_ENABLE = no  # Virtual DIP switch configuration(+1000)
