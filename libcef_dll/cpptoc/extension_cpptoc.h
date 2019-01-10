// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=dc3a7d0122346963b281f1e49d193c02ca09d4b4$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_EXTENSION_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_EXTENSION_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_extension_capi.h"
#include "include/capi/cef_extension_handler_capi.h"
#include "include/capi/cef_request_context_capi.h"
#include "include/cef_extension.h"
#include "include/cef_extension_handler.h"
#include "include/cef_request_context.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefExtensionCppToC : public CefCppToCRefCounted<CefExtensionCppToC,
                                                      CefExtension,
                                                      cef_extension_t> {
 public:
  CefExtensionCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_EXTENSION_CPPTOC_H_
