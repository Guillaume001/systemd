/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

int run_udevd(int argc, char *argv[]);

bool devpath_conflict(const char *a, const char *b);
