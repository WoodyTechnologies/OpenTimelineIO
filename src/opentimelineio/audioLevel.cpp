// SPDX-License-Identifier: Apache-2.0
// Copyright Contributors to the OpenTimelineIO project

#include "opentimelineio/audioLevel.h"

namespace opentimelineio { namespace OPENTIMELINEIO_VERSION {

AudioLevel::AudioLevel(
    std::string const&   name,
    std::string const&   effect_name,
    AnyDictionary const& metadata)
    : Parent(name, effect_name, metadata)
{}

AudioLevel::~AudioLevel()
{}

}} // namespace opentimelineio::OPENTIMELINEIO_VERSION
