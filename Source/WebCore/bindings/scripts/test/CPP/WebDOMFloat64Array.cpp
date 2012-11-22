/*
 * This file is part of the WebKit open source project.
 * This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "WebDOMFloat64Array.h"

#include "Float32Array.h"
#include "Int32Array.h"
#include "WebDOMFloat32Array.h"
#include "WebDOMInt32Array.h"
#include "WebExceptionHandler.h"
#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>

WebDOMFloat64Array::WebDOMFloat64Array()
    : WebDOMArrayBufferView()
{
}

WebDOMFloat64Array::WebDOMFloat64Array(WTF::Float64Array* impl)
    : WebDOMArrayBufferView(impl)
{
}

WTF::Float64Array* WebDOMFloat64Array::impl() const
{
    return static_cast<WTF::Float64Array*>(WebDOMArrayBufferView::impl());
}

WebDOMInt32Array WebDOMFloat64Array::foo(const WebDOMFloat32Array& array)
{
    if (!impl())
        return WebDOMInt32Array();

    return toWebKit(WTF::getPtr(impl()->foo(toWebCore(array))));
}

WTF::Float64Array* toWebCore(const WebDOMFloat64Array& wrapper)
{
    return wrapper.impl();
}

WebDOMFloat64Array toWebKit(WTF::Float64Array* value)
{
    return WebDOMFloat64Array(value);
}
