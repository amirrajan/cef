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
// $hash=12cd68fcf89a3cdccf4651f709796357f0159fa8$
//

#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/v8context_cpptoc.h"
#include "libcef_dll/ctocpp/domvisitor_ctocpp.h"
#include "libcef_dll/ctocpp/string_visitor_ctocpp.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK frame_is_valid(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefFrameCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK frame_undo(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefFrameCppToC::Get(self)->Undo();
}

void CEF_CALLBACK frame_redo(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefFrameCppToC::Get(self)->Redo();
}

void CEF_CALLBACK frame_cut(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefFrameCppToC::Get(self)->Cut();
}

void CEF_CALLBACK frame_copy(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefFrameCppToC::Get(self)->Copy();
}

void CEF_CALLBACK frame_paste(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefFrameCppToC::Get(self)->Paste();
}

void CEF_CALLBACK frame_del(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefFrameCppToC::Get(self)->Delete();
}

void CEF_CALLBACK frame_select_all(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefFrameCppToC::Get(self)->SelectAll();
}

void CEF_CALLBACK frame_view_source(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefFrameCppToC::Get(self)->ViewSource();
}

void CEF_CALLBACK frame_get_source(struct _cef_frame_t* self,
                                   struct _cef_string_visitor_t* visitor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor);
  if (!visitor)
    return;

  // Execute
  CefFrameCppToC::Get(self)->GetSource(CefStringVisitorCToCpp::Wrap(visitor));
}

void CEF_CALLBACK frame_get_text(struct _cef_frame_t* self,
                                 struct _cef_string_visitor_t* visitor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor);
  if (!visitor)
    return;

  // Execute
  CefFrameCppToC::Get(self)->GetText(CefStringVisitorCToCpp::Wrap(visitor));
}

void CEF_CALLBACK frame_load_request(struct _cef_frame_t* self,
                                     struct _cef_request_t* request) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: request; type: refptr_same
  DCHECK(request);
  if (!request)
    return;

  // Execute
  CefFrameCppToC::Get(self)->LoadRequest(CefRequestCppToC::Unwrap(request));
}

void CEF_CALLBACK frame_load_url(struct _cef_frame_t* self,
                                 const cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return;

  // Execute
  CefFrameCppToC::Get(self)->LoadURL(CefString(url));
}

void CEF_CALLBACK frame_load_string(struct _cef_frame_t* self,
                                    const cef_string_t* string_val,
                                    const cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: string_val; type: string_byref_const
  DCHECK(string_val);
  if (!string_val)
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return;

  // Execute
  CefFrameCppToC::Get(self)->LoadString(CefString(string_val), CefString(url));
}

void CEF_CALLBACK frame_execute_java_script(struct _cef_frame_t* self,
                                            const cef_string_t* code,
                                            const cef_string_t* script_url,
                                            int start_line) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: code; type: string_byref_const
  DCHECK(code);
  if (!code)
    return;
  // Unverified params: script_url

  // Execute
  CefFrameCppToC::Get(self)->ExecuteJavaScript(
      CefString(code), CefString(script_url), start_line);
}

int CEF_CALLBACK frame_is_main(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefFrameCppToC::Get(self)->IsMain();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK frame_is_focused(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefFrameCppToC::Get(self)->IsFocused();

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK frame_get_name(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefFrameCppToC::Get(self)->GetName();

  // Return type: string
  return _retval.DetachToUserFree();
}

int64 CEF_CALLBACK frame_get_identifier(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int64 _retval = CefFrameCppToC::Get(self)->GetIdentifier();

  // Return type: simple
  return _retval;
}

struct _cef_frame_t* CEF_CALLBACK frame_get_parent(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefFrame> _retval = CefFrameCppToC::Get(self)->GetParent();

  // Return type: refptr_same
  return CefFrameCppToC::Wrap(_retval);
}

cef_string_userfree_t CEF_CALLBACK frame_get_url(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefFrameCppToC::Get(self)->GetURL();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_browser_t* CEF_CALLBACK frame_get_browser(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBrowser> _retval = CefFrameCppToC::Get(self)->GetBrowser();

  // Return type: refptr_same
  return CefBrowserCppToC::Wrap(_retval);
}

struct _cef_v8context_t* CEF_CALLBACK
frame_get_v8context(struct _cef_frame_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefV8Context> _retval = CefFrameCppToC::Get(self)->GetV8Context();

  // Return type: refptr_same
  return CefV8ContextCppToC::Wrap(_retval);
}

void CEF_CALLBACK frame_visit_dom(struct _cef_frame_t* self,
                                  cef_domvisitor_t* visitor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor);
  if (!visitor)
    return;

  // Execute
  CefFrameCppToC::Get(self)->VisitDOM(CefDOMVisitorCToCpp::Wrap(visitor));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefFrameCppToC::CefFrameCppToC() {
  GetStruct()->is_valid = frame_is_valid;
  GetStruct()->undo = frame_undo;
  GetStruct()->redo = frame_redo;
  GetStruct()->cut = frame_cut;
  GetStruct()->copy = frame_copy;
  GetStruct()->paste = frame_paste;
  GetStruct()->del = frame_del;
  GetStruct()->select_all = frame_select_all;
  GetStruct()->view_source = frame_view_source;
  GetStruct()->get_source = frame_get_source;
  GetStruct()->get_text = frame_get_text;
  GetStruct()->load_request = frame_load_request;
  GetStruct()->load_url = frame_load_url;
  GetStruct()->load_string = frame_load_string;
  GetStruct()->execute_java_script = frame_execute_java_script;
  GetStruct()->is_main = frame_is_main;
  GetStruct()->is_focused = frame_is_focused;
  GetStruct()->get_name = frame_get_name;
  GetStruct()->get_identifier = frame_get_identifier;
  GetStruct()->get_parent = frame_get_parent;
  GetStruct()->get_url = frame_get_url;
  GetStruct()->get_browser = frame_get_browser;
  GetStruct()->get_v8context = frame_get_v8context;
  GetStruct()->visit_dom = frame_visit_dom;
}

template <>
CefRefPtr<CefFrame>
CefCppToCRefCounted<CefFrameCppToC, CefFrame, cef_frame_t>::UnwrapDerived(
    CefWrapperType type,
    cef_frame_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCppToCRefCounted<CefFrameCppToC, CefFrame, cef_frame_t>::DebugObjCt
        ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType
    CefCppToCRefCounted<CefFrameCppToC, CefFrame, cef_frame_t>::kWrapperType =
        WT_FRAME;
