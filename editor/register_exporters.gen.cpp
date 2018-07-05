#include "register_exporters.h"
#include "platform/android/export/export.h"
#include "platform/iphone/export/export.h"
#include "platform/javascript/export/export.h"
#include "platform/osx/export/export.h"
#include "platform/uwp/export/export.h"
#include "platform/windows/export/export.h"
#include "platform/x11/export/export.h"
void register_exporters() {
	register_android_exporter();
	register_iphone_exporter();
	register_javascript_exporter();
	register_osx_exporter();
	register_uwp_exporter();
	register_windows_exporter();
	register_x11_exporter();
}
