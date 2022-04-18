/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2022 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "shared-bindings/mdns/RemoteService.h"

const char *common_hal_mdns_remoteservice_get_service_type(mdns_remoteservice_obj_t *self) {
    if (self->result == NULL) {
        return "";
    }
    return self->result->service_type;
}

const char *common_hal_mdns_remoteservice_get_protocol(mdns_remoteservice_obj_t *self) {
    if (self->result == NULL) {
        return "";
    }
    return self->result->proto;
}

const char *common_hal_mdns_remoteservice_get_instance_name(mdns_remoteservice_obj_t *self) {
    if (self->result == NULL) {
        return "";
    }
    return self->result->instance_name;
}

const char *common_hal_mdns_remoteservice_get_hostname(mdns_remoteservice_obj_t *self) {
    if (self->result == NULL) {
        return "";
    }
    return self->result->hostname;
}

mp_int_t common_hal_mdns_remoteservice_get_port(mdns_remoteservice_obj_t *self) {
    if (self->result == NULL) {
        return 0;
    }
    return self->result->port;
}

void common_hal_mdns_remoteservice_deinit(mdns_remoteservice_obj_t *self) {
    mdns_query_results_free(self->result);
    self->result = NULL;
}