# The dependencies referenced by the Flutter Engine.
#
# This file is referenced by the .gclient file at the root of the checkout.
# To preview changes to the dependencies, update this file and run
# `gclient sync`.
#
# When adding a new dependency, please update the top-level .gitignore file
# to list the dependency's destination directory.

vars = {
  'chromium_git': 'https://chromium.googlesource.com',
  'swiftshader_git': 'https://swiftshader.googlesource.com',
  'dart_git': 'https://dart.googlesource.com',
  'flutter_git': 'https://flutter.googlesource.com',
  'skia_git': 'https://skia.googlesource.com',
  'llvm_git': 'https://llvm.googlesource.com',
  'skia_revision': '9d530bb0bcbfd571ee3d820fdd79ff859d61e2cd',

  # WARNING: DO NOT EDIT canvaskit_cipd_instance MANUALLY
  # See `lib/web_ui/README.md` for how to roll CanvasKit to a new version.
  'canvaskit_cipd_instance': '61aeJQ9laGfEFF_Vlc_u0MCkqB6xb2hAYHRBxKH-Uw4C',

  # Do not download the Emscripten SDK by default.
  # This prevents us from downloading the Emscripten toolchain for builds
  # which do not build for the web. This toolchain is needed to build CanvasKit
  # for the web engine.
  'download_emsdk': False,

  # For experimental features some dependencies may only be avaialable in the master/main
  # channels. This variable is being set when CI is checking out the repository.
  'release_candidate': False,

  # As Dart does, we use Fuchsia's GN and Clang toolchain. These revision
  # should be kept up to date with the revisions pulled by Dart.
  #
  # The list of revisions for these tools comes from Fuchsia, here:
  # https://fuchsia.googlesource.com/integration/+/HEAD/toolchain
  # If there are problems with the toolchain, contact fuchsia-toolchain@.
  #
  # Note, if you are *manually* rolling clang (i.e. the auto-roll is disabled)
  # you'll need to run post-submits (i.e. for Clang Tidy) in order to test that
  # updates to Clang Tidy will not turn the tree red.
  #
  # See https://github.com/flutter/flutter/wiki/Engine-pre‐submits-and-post‐submits#post-submit
  'clang_version': 'git_revision:725656bdd885483c39f482a01ea25d67acf39c46',

  'reclient_version': 'git_revision:29a9d3cb597b6a7d67fa3e9aa8a7cab1c81232ee',

  'gcloud_version': 'version:2@444.0.0.chromium.3',

  'esbuild_version': '0.19.5',

  # When updating the Dart revision, ensure that all entries that are
  # dependencies of Dart are also updated to match the entries in the
  # Dart SDK's DEPS file for that revision of Dart. The DEPS file for
  # Dart is: https://github.com/dart-lang/sdk/blob/main/DEPS
  # You can use //tools/dart/create_updated_flutter_deps.py to produce
  # updated revision list of existing dependencies.
  'dart_revision': '179da3ba67ead156a3ba718bd798cb7a1728e741',

  # WARNING: DO NOT EDIT MANUALLY
  # The lines between blank lines above and below are generated by a script. See create_updated_flutter_deps.py
  'dart_binaryen_rev': '654ee6e2504f11fb0e982a2cf276bafa750f694b',
  'dart_boringssl_gen_rev': '9c7294fd58261a79794f5afaa26598cf1442ad20',
  'dart_boringssl_rev': 'd24a38200fef19150eef00cad35b138936c08767',
  'dart_browser_launcher_rev': '60126904a26b761d29b4f2d76292ff3c089160de',
  'dart_clock_rev': 'ad428ea8b75fa0d7ba629791552d40478745c54a',
  'dart_collection_rev': '9354f386de3c57f5486b01ab4dfa1a2f033307d9',
  'dart_devtools_rev': '70375f6c6d81faa8f3069aa6dcf2a98c69445455',
  'dart_libprotobuf_rev': '24487dd1045c7f3d64a21f38a3f0c06cc4cf2edb',
  'dart_perfetto_rev': '13ce0c9e13b0940d2476cd0cff2301708a9a2e2b',
  'dart_protobuf_gn_rev': 'ca669f79945418f6229e4fef89b666b2a88cbb10',
  'dart_protobuf_rev': 'ccf104dbc36929c0f8708285d5f3a8fae206343e',
  'dart_pub_rev': 'ea4a1c854690d3abceb92c8cc2c6454470f9d5a7',
  'dart_tools_rev': '43a8582a85d2220b5f1ca8383d97587792085b36',
  'dart_watcher_rev': '0484625589d8512b36a7ad898a6cc6351d24c556',
  'dart_web_rev': 'e4c4d8126466e28dc137890b8f999da59bdedddd',
  'dart_webdev_rev': '75417c09181c97786d9539a662834bed9d2f1e77',
  'dart_webkit_inspection_protocol_rev': '32fffa53df3f54005c742ddf4f859fb585a6b254',
  'dart_yaml_edit_rev': '57a28daea82a3f00f57a90d5ea6df6a458b2f781',

  'ocmock_rev': 'c4ec0e3a7a9f56cfdbd0aa01f4f97bb4b75c5ef8', # v3.7.1

  # Download a prebuilt Dart SDK by default
  'download_dart_sdk': True,

  # Download a prebuilt esbuild by default
  'download_esbuild': True,

  # Checkout Android dependencies only on platforms where we build for Android targets.
  'download_android_deps': 'host_os == "mac" or (host_os == "linux" and host_cpu == "x64")',

  # Checkout Windows dependencies only if we are building on Windows.
  'download_windows_deps' : 'host_os == "win"',

  # Checkout Linux dependencies only when building on Linux.
  'download_linux_deps': 'host_os == "linux"',

  # The minimum macOS SDK version. This must match the setting in
  # //flutter/tools/gn.
  'mac_sdk_min': '10.14',

  # Checkout Fuchsia dependencies only on Linux. This is the umbrella flag which
  # controls the behavior of all fuchsia related flags. I.e. any fuchsia related
  # logic or condition may not work if this flag is False.
  # TODO(zijiehe): Make this condition more strict to only download fuchsia
  # dependencies when necessary: b/40935282
  'download_fuchsia_deps': 'host_os == "linux"',
  # Downloads the fuchsia SDK as listed in fuchsia_sdk_path var. This variable
  # is currently only used for the Fuchsia LSC process and is not intended for
  # local development.
  'download_fuchsia_sdk': False,
  'fuchsia_sdk_path': '',
  # Whether to download and run the Fuchsia emulator locally to test Fuchsia
  # builds.
  'run_fuchsia_emu': False,

  # An LLVM backend needs LLVM binaries and headers. To avoid build time
  # increases we can use prebuilts. We don't want to download this on every
  # CQ/CI bot nor do we want the average Dart developer to incur that cost.
  # So by default we will not download prebuilts. This variable is needed in
  # the flutter engine to ensure that Dart gn has access to it as well.
  "checkout_llvm": False,

  # Setup Git hooks by default.
  'setup_githooks': True,

  # When this is true, the Flutter Engine's configuration files and scripts for
  # RBE will be downloaded from CIPD. This option is only usable by Googlers.
  'use_rbe': False,

  # This is not downloaded be default because it increases the
  # `gclient sync` time by between 1 and 3 minutes. This option is enabled
  # in flutter/ci/builders/mac_impeller_cmake_example.json, and is likely to
  # only be useful locally when reproducing issues found by the bot.
  'download_impeller_cmake_example': False,

  # Upstream URLs for third party dependencies, used in
  # determining common ancestor commit for vulnerability scanning
  # prefixed with 'upstream_' in order to be identified by parsing tool.
  # The vulnerability database being used in this scan can be browsed
  # using this UI https://osv.dev/list
  # If a new dependency needs to be added, the upstream (non-mirrored)
  # git URL for that dependency should be added to this list
  # with the key-value pair being:
  # 'upstream_[dep name from last slash and before .git in URL]':'[git URL]'
  # example:
  "upstream_abseil-cpp": "https://github.com/abseil/abseil-cpp.git",
  "upstream_angle": "https://github.com/google/angle.git",
  "upstream_archive": "https://github.com/brendan-duncan/archive.git",
  "upstream_args": "https://github.com/dart-lang/args.git",
  "upstream_async": "https://github.com/dart-lang/async.git",
  "upstream_bazel_worker": "https://github.com/dart-lang/bazel_worker.git",
  "upstream_benchmark": "https://github.com/google/benchmark.git",
  "upstream_boolean_selector": "https://github.com/dart-lang/boolean_selector.git",
  "upstream_boringssl_gen": "https://github.com/dart-lang/boringssl_gen.git",
  "upstream_boringssl": "https://github.com/openssl/openssl.git",
  "upstream_browser_launcher": "https://github.com/dart-lang/browser_launcher.git",
  "upstream_buildroot": "https://github.com/flutter/buildroot.git",
  "upstream_cli_util": "https://github.com/dart-lang/cli_util.git",
  "upstream_clock": "https://github.com/dart-lang/clock.git",
  "upstream_collection": "https://github.com/dart-lang/collection.git",
  "upstream_convert": "https://github.com/dart-lang/convert.git",
  "upstream_crypto": "https://github.com/dart-lang/crypto.git",
  "upstream_csslib": "https://github.com/dart-lang/csslib.git",
  "upstream_dart_style": "https://github.com/dart-lang/dart_style.git",
  "upstream_dartdoc": "https://github.com/dart-lang/dartdoc.git",
  "upstream_equatable": "https://github.com/felangel/equatable.git",
  "upstream_ffi": "https://github.com/dart-lang/ffi.git",
  "upstream_file": "https://github.com/google/file.dart.git",
  "upstream_fixnum": "https://github.com/dart-lang/fixnum.git",
  "upstream_flatbuffers": "https://github.com/google/flatbuffers.git",
  "upstream_freetype2": "https://gitlab.freedesktop.org/freetype/freetype.git",
  "upstream_gcloud": "https://github.com/dart-lang/gcloud.git",
  "upstream_glfw": "https://github.com/glfw/glfw.git",
  "upstream_glob": "https://github.com/dart-lang/glob.git",
  "upstream_googleapis": "https://github.com/google/googleapis.dart.git",
  "upstream_googletest": "https://github.com/google/googletest.git",
  "upstream_gtest-parallel": "https://github.com/google/gtest-parallel.git",
  "upstream_harfbuzz": "https://github.com/harfbuzz/harfbuzz.git",
  "upstream_html": "https://github.com/dart-lang/html.git",
  "upstream_http_multi_server": "https://github.com/dart-lang/http_multi_server.git",
  "upstream_http_parser": "https://github.com/dart-lang/http_parser.git",
  "upstream_http": "https://github.com/dart-lang/http.git",
  "upstream_icu": "https://github.com/unicode-org/icu.git",
  "upstream_intl": "https://github.com/dart-lang/intl.git",
  "upstream_imgui": "https://github.com/ocornut/imgui.git",
  "upstream_inja": "https://github.com/pantor/inja.git",
  "upstream_json": "https://github.com/nlohmann/json.git",
  "upstream_json_rpc_2": "https://github.com/dart-lang/json_rpc_2.git",
  "upstream_libcxx": "https://github.com/llvm-mirror/libcxx.git",
  "upstream_libcxxabi": "https://github.com/llvm-mirror/libcxxabi.git",
  "upstream_libexpat": "https://github.com/libexpat/libexpat.git",
  "upstream_libjpeg-turbo": "https://github.com/libjpeg-turbo/libjpeg-turbo.git",
  "upstream_libpng": "https://github.com/glennrp/libpng.git",
  "upstream_libtess2": "https://github.com/memononen/libtess2.git",
  "upstream_libwebp": "https://chromium.googlesource.com/webm/libwebp.git",
  "upstream_leak_tracker": "https://github.com/dart-lang/leak_tracker.git",
  "upstream_logging": "https://github.com/dart-lang/logging.git",
  "upstream_markdown": "https://github.com/dart-lang/markdown.git",
  "upstream_matcher": "https://github.com/dart-lang/matcher.git",
  "upstream_mime": "https://github.com/dart-lang/mime.git",
  "upstream_mockito": "https://github.com/dart-lang/mockito.git",
  "upstream_ocmock": "https://github.com/erikdoe/ocmock.git",
  "upstream_package_config": "https://github.com/dart-lang/package_config.git",
  "upstream_packages": "https://github.com/flutter/packages.git",
  "upstream_path": "https://github.com/dart-lang/path.git",
  "upstream_platform": "https://github.com/google/platform.dart.git",
  "upstream_pool": "https://github.com/dart-lang/pool.git",
  "upstream_process_runner": "https://github.com/google/process_runner.git",
  "upstream_process": "https://github.com/google/process.dart.git",
  "upstream_protobuf": "https://github.com/google/protobuf.dart.git",
  "upstream_pub_semver": "https://github.com/dart-lang/pub_semver.git",
  "upstream_pub": "https://github.com/dart-lang/pub.git",
  "upstream_pyyaml": "https://github.com/yaml/pyyaml.git",
  "upstream_quiver-dart": "https://github.com/google/quiver-dart.git",
  "upstream_rapidjson": "https://github.com/Tencent/rapidjson.git",
  "upstream_sdk": "https://github.com/dart-lang/sdk.git",
  "upstream_shaderc": "https://github.com/google/shaderc.git",
  "upstream_shelf": "https://github.com/dart-lang/shelf.git",
  "upstream_skia": "https://skia.googlesource.com/skia.git",
  "upstream_source_map_stack_trace": "https://github.com/dart-lang/source_map_stack_trace.git",
  "upstream_source_maps": "https://github.com/dart-lang/source_maps.git",
  "upstream_source_span": "https://github.com/dart-lang/source_span.git",
  "upstream_sqlite": "https://github.com/sqlite/sqlite.git",
  "upstream_sse": "https://github.com/dart-lang/sse.git",
  "upstream_stack_trace": "https://github.com/dart-lang/stack_trace.git",
  "upstream_stb": "https://github.com/nothings/stb.git",
  "upstream_stream_channel": "https://github.com/dart-lang/stream_channel.git",
  "upstream_string_scanner": "https://github.com/dart-lang/string_scanner.git",
  "upstream_SwiftShader": "https://swiftshader.googlesource.com/SwiftShader.git",
  "upstream_tar": "https://github.com/simolus3/tar.git",
  "upstream_term_glyph": "https://github.com/dart-lang/term_glyph.git",
  "upstream_test_reflective_loader": "https://github.com/dart-lang/test_reflective_loader.git",
  "upstream_test": "https://github.com/dart-lang/test.git",
  "upstream_tinygltf": "https://github.com/syoyo/tinygltf.git",
  "upstream_typed_data": "https://github.com/dart-lang/typed_data.git",
  "upstream_usage": "https://github.com/dart-lang/usage.git",
  "upstream_vector_math": "https://github.com/google/vector_math.dart.git",
  "upstream_VulkanMemoryAllocator": "https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator.git",
  "upstream_watcher": "https://github.com/dart-lang/watcher.git",
  "upstream_web_socket_channel": "https://github.com/dart-lang/web_socket_channel.git",
  "upstream_webdev": "https://github.com/dart-lang/webdev.git",
  "upstream_webkit_inspection_protocol": "https://github.com/google/webkit_inspection_protocol.dart.git",
  "upstream_wuffs-mirror-release-c": "https://github.com/google/wuffs-mirror-release-c.git",
  "upstream_yaml_edit": "https://github.com/dart-lang/yaml_edit.git",
  "upstream_yaml": "https://github.com/dart-lang/yaml.git",
  "upstream_yapf": "https://github.com/google/yapf.git",
  "upstream_zlib": "https://github.com/madler/zlib.git",

  # The version / instance id of the cipd:chromium/fuchsia/test-scripts which
  # will be used altogether with fuchsia-sdk to setup the build / test
  # environment.
  'fuchsia_test_scripts_version': 'XtkBHdNTtIpWdxN_lUNf6VqnvPUhvGTYgPDqob1R65EC',

  # The version / instance id of the cipd:chromium/fuchsia/gn-sdk which will be
  # used altogether with fuchsia-sdk to generate gn based build rules.
  'fuchsia_gn_sdk_version': 'sbh76PYVTMxav4ACTgA-TXWcbZTZcWWjsqATCxrGIvwC',
}

gclient_gn_args_file = 'src/flutter/third_party/dart/build/config/gclient_args.gni'
gclient_gn_args = [
  'checkout_llvm'
]

# Only these hosts are allowed for dependencies in this DEPS file.
# If you need to add a new host, contact chrome infrastructure team.
allowed_hosts = [
  'boringssl.googlesource.com',
  'chrome-infra-packages.appspot.com',
  'chromium.googlesource.com',
  'dart.googlesource.com',
  'flutter.googlesource.com',
  'llvm.googlesource.com',
  'skia.googlesource.com',
  'swiftshader.googlesource.com',
]

deps = {
  'src/flutter/third_party/rapidjson':
   Var('flutter_git') + '/third_party/rapidjson' + '@' + 'ef3564c5c8824989393b87df25355baf35ff544b',

  'src/flutter/third_party/shaderc':
   Var('chromium_git') + '/external/github.com/google/shaderc' + '@' + '37e25539ce199ecaf19fb7f7d27818716d36686d',

  'src/flutter/third_party/yapf':
  Var('flutter_git') + '/third_party/yapf' + '@' + '212c5b5ad8e172d2d914ae454c121c89cccbcb35',

  # TODO(67373): These are temporarily checked in, but this dep can be restored
  # once the buildmoot is completed.
  # 'flutter/build/secondary/third_party/protobuf':
  #  Var('flutter_git') + '/third_party/protobuf-gn' + '@' + Var('dart_protobuf_gn_rev'),

  'src/flutter/third_party/dart':
   Var('dart_git') + '/sdk.git' + '@' + Var('dart_revision'),

  'src/flutter/third_party/inja':
   Var('flutter_git') + '/third_party/inja' + '@' + '88bd6112575a80d004e551c98cf956f88ff4d445',

  'src/flutter/third_party/libtess2':
   Var('flutter_git') + '/third_party/libtess2' + '@' + '725e5e08ec8751477565f1d603fd7eb9058c277c',

  'src/flutter/third_party/imgui':
   Var('flutter_git') + '/third_party/imgui.git' + '@' + '3ea0fad204e994d669f79ed29dcaf61cd5cb571d',

  'src/flutter/third_party/tinygltf':
   Var('flutter_git') + '/third_party/tinygltf.git' + '@' + '9bb5806df4055ac973b970ba5b3e27ce27d98148',

  'src/flutter/third_party/json':
   Var('flutter_git') + '/third_party/json.git' + '@' + '17d9eacd248f58b73f4d1be518ef649fe2295642',

  'src/flutter/third_party/stb':
   Var('flutter_git') + '/third_party/stb.git' + '@' + '5736b15f7ea0ffb08dd38af21067c314d6a3aae9',

  'src/flutter/third_party/dart/third_party/devtools':
   {'dep_type': 'cipd', 'packages': [{'package': 'dart/third_party/flutter/devtools', 'version': 'git_revision:70375f6c6d81faa8f3069aa6dcf2a98c69445455'}]},

  'src/flutter/third_party/dart/tools/sdks/dart-sdk':
   {'dep_type': 'cipd', 'packages': [{'package': 'dart/dart-sdk/${{platform}}', 'version': 'version:3.5.0-278.0.dev'}]},
}

hooks = [
  {
    # Generate the Dart SDK's .dart_tool/package_confg.json file.
    'name': 'Generate .dart_tool/package_confg.json',
    'pattern': '.',
    'action': ['python3', 'src/flutter/third_party/dart/tools/generate_package_config.py'],
  },
  {
    # Generate the sdk/version file.
    'name': 'Generate sdk/version',
    'pattern': '.',
    'action': ['python3', 'src/flutter/third_party/dart/tools/generate_sdk_version_file.py'],
  }
]
