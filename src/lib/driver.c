/*
 * This file is part of linux-driver-management.
 *
 * Copyright © 2016-2017 Ikey Doherty
 *
 * linux-driver-management is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 */

#define _GNU_SOURCE

#include "driver.h"
#include "util.h"

G_DEFINE_TYPE(LdmDriver, ldm_driver, G_TYPE_OBJECT)

/**
 * ldm_driver_dispose:
 *
 * Clean up a LdmDriver instance
 */
static void ldm_driver_dispose(GObject *obj)
{
        G_OBJECT_CLASS(ldm_driver_parent_class)->dispose(obj);
}

/**
 * ldm_driver_class_init:
 *
 * Handle class initialisation
 */
static void ldm_driver_class_init(LdmDriverClass *klazz)
{
        GObjectClass *obj_class = G_OBJECT_CLASS(klazz);

        /* gobject vtable hookup */
        obj_class->dispose = ldm_driver_dispose;
}

/**
 * ldm_driver_init:
 *
 * Handle construction of the LdmDriver
 */
static void ldm_driver_init(__ldm_unused__ LdmDriver *self)
{
}

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 8
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=8 tabstop=8 expandtab:
 * :indentSize=8:tabSize=8:noTabs=true:
 */
