

NOTE:
1.The glib has not support malloc hooks now.
2.The operating system has to support "programming interface to dynamic linking loader" and backtrace.
3.The module should be compiled with -Wl,--export-dynamic option. Look the link below in detials.
  https://bugzilla.redhat.com/show_bug.cgi?id=169017

