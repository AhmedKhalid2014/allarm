ARCHS = armv7 arm64

THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222
THEOS_PACKAGE_DIR_NAME = debs
ADDITIONAL_OBJCFLAGS = -fobjc-arc

include theos/makefiles/common.mk

TWEAK_NAME = Allarm
Allarm_FILES = Tweak.xm
Allarm_FRAMEWORKS = UIKit
Allarm_PRIVATE_FRAMEWORKS = MobileTimer
include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
