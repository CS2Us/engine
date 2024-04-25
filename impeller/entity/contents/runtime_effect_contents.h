// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_IMPELLER_ENTITY_CONTENTS_RUNTIME_EFFECT_CONTENTS_H_
#define FLUTTER_IMPELLER_ENTITY_CONTENTS_RUNTIME_EFFECT_CONTENTS_H_

#include <memory>
#include <vector>

#include "impeller/core/sampler_descriptor.h"
#include "impeller/entity/contents/color_source_contents.h"
#include "impeller/runtime_stage/runtime_stage.h"

namespace impeller {

class RuntimeEffectContents final : public ColorSourceContents {
 public:
  struct TextureInput {
    SamplerDescriptor sampler_descriptor;
    std::shared_ptr<Texture> texture;
  };

  void SetRuntimeStage(std::shared_ptr<RuntimeStage> runtime_stage);

  void SetUniformData(std::shared_ptr<std::vector<uint8_t>> uniform_data);

  void SetTextureInputs(std::vector<TextureInput> texture_inputs);

  // | Contents|
  bool CanInheritOpacity(const Entity& entity) const override;

  // |Contents|
  bool Render(const ContentContext& renderer,
              const Entity& entity,
              RenderPass& pass) const override;

  /// Load the runtime effect and ensure a default PSO is initialized.
  bool BootstrapShader(const ContentContext& renderer) const;

 private:
  bool RegisterShader(const ContentContext& renderer) const;

  std::shared_ptr<Pipeline<PipelineDescriptor>> CreatePipeline(
      const ContentContext& renderer,
      ContentContextOptions options) const;

  std::shared_ptr<RuntimeStage> runtime_stage_;
  std::shared_ptr<std::vector<uint8_t>> uniform_data_;
  std::vector<TextureInput> texture_inputs_;
};

}  // namespace impeller

#endif  // FLUTTER_IMPELLER_ENTITY_CONTENTS_RUNTIME_EFFECT_CONTENTS_H_
