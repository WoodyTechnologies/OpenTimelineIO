// SPDX-License-Identifier: Apache-2.0
// Copyright Contributors to the OpenTimelineIO project

#pragma once

#include "opentimelineio/effect.h"
#include "opentimelineio/version.h"

namespace opentimelineio { namespace OPENTIMELINEIO_VERSION {

class AudioLevel : public Effect
{
public:
    struct Schema
    {
        static auto constexpr name   = "AudioLevel";
        static int constexpr version = 1;
    };

    using Parent = Effect;

    AudioLevel(
        std::string const&   name        = std::string(),
        std::string const&   effect_name = std::string(),
        AnyDictionary const& metadata    = AnyDictionary());

protected:
    virtual ~AudioLevel();
};

}} // namespace opentimelineio::OPENTIMELINEIO_VERSION
