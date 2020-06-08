/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <react/components/art/ARTSurfaceViewShadowNode.h>
#include <react/core/ConcreteComponentDescriptor.h>

namespace facebook {
namespace react {

using ARTSurfaceViewComponentDescriptor =
    ConcreteComponentDescriptor<ARTSurfaceViewShadowNode>;

} // namespace react
} // namespace facebook
