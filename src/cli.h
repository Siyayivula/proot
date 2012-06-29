/* This file is automatically generated from the documentation. EDIT AT YOUR OWN RISK. */

#ifndef CLI_H
#define CLI_H

#include <stddef.h>
#include "build.h"

struct argument {
	const char *name;
	char separator;
	const char *value;
};

typedef void (*option_handler_t)(char *value);

struct option {
	const char *class;
	option_handler_t handler;
	const char *description;
	struct argument arguments[5];
};

#ifndef VERSION
#define VERSION "1.9.1"
#endif
static const char *version = VERSION;
static const char *subtitle = "chroot, mount --bind, and binfmt_misc without privilege/setup";
static const char *synopsis = "proot [option] ... /path/to/guest/rootfs [program [arg] ...]";
static const char *colophon = "Visit http://proot.me for help, bug reports, suggestions, patchs, ...\n\
Copyright (C) 2012 STMicroelectronics, licensed under GPL v2 or later.";

static char *recommended_bindings[] = {
	"/etc/host.conf",
	"/etc/hosts",
	"/etc/hosts.equiv",
	"/etc/mtab",
	"/etc/netgroup",
	"/etc/networks",
	"/etc/passwd",
	"/etc/group",
	"/etc/nsswitch.conf",
	"/etc/resolv.conf",
	"/etc/localtime",
	"/dev/",
	"/sys/",
	"/proc/",
	"/tmp/",
	"$HOME",
	NULL,
};

static void handle_option_b(char *value);
static void handle_option_q(char *value);
static void handle_option_w(char *value);
static void handle_option_u(char *value);
static void handle_option_k(char *value);
static void handle_option_0(char *value);
static void handle_option_v(char *value);
static void handle_option_V(char *value);
static void handle_option_h(char *value);
static void handle_option_B(char *value);
static void handle_option_Q(char *value);
static void handle_option_W(char *value);

static struct option options[] = {
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-b", .separator = ' ', .value = "path" },
		{ .name = "--bind", .separator = '=', .value = "path" },
		{ .name = "-m", .separator = ' ', .value = "path" },
		{ .name = "--mount", .separator = '=', .value = "path" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_b,
	  .description = "Make the content of *path* accessible in the guest rootfs.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-q", .separator = ' ', .value = "command" },
		{ .name = "--qemu", .separator = '=', .value = "command" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_q,
	  .description = "Execute guest programs through QEMU as specified by *command*.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-w", .separator = ' ', .value = "path" },
		{ .name = "--pwd", .separator = '=', .value = "path" },
		{ .name = "--cwd", .separator = '=', .value = "path" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_w,
	  .description = "Set the initial working directory to *path*, default is /.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-u", .separator = '\0', .value = NULL },
		{ .name = "--allow-unknown-syscalls", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_u,
	  .description = "Allow the execution of unknown syscalls.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-k", .separator = ' ', .value = "string" },
		{ .name = "--kernel-release", .separator = '=', .value = "string" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_k,
	  .description = "Force syscall uname to report *string* as kernel release.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-0", .separator = '\0', .value = NULL },
		{ .name = "--root-id", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_0,
	  .description = "Force some syscalls to behave as if executed by \"root\".",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-v", .separator = '\0', .value = NULL },
		{ .name = "--verbose", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_v,
	  .description = "Increase the level of debug information.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-V", .separator = '\0', .value = NULL },
		{ .name = "--version", .separator = '\0', .value = NULL },
		{ .name = "--about", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_V,
	  .description = "Print version, copyright, license and contact, then exit.",
	},
	{ .class = "Regular options",
	  .arguments = {
		{ .name = "-h", .separator = '\0', .value = NULL },
		{ .name = "--help", .separator = '\0', .value = NULL },
		{ .name = "--usage", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_h,
	  .description = "Print the version and the command-line usage, then exit.",
	},
	{ .class = "Alias options",
	  .arguments = {
		{ .name = "-B", .separator = '\0', .value = NULL },
		{ .name = "-M", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_B,
	  .description = "Alias: -b for each path of a recommended list",
	},
	{ .class = "Alias options",
	  .arguments = {
		{ .name = "-Q", .separator = ' ', .value = "command" },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_Q,
	  .description = "Alias: -q *command* -B",
	},
	{ .class = "Alias options",
	  .arguments = {
		{ .name = "-W", .separator = '\0', .value = NULL },
		{ .name = NULL, .separator = '\0', .value = NULL } },
	  .handler = handle_option_W,
	  .description = "Alias: -b . -w .",
	},
};

#endif /* CLI_H */
