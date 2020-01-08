// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.10.0-rc1/WhileString.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileString;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileString :21
// {
::g::Fuse::Triggers::WhileValue_type* WhileString_typeof();
void WhileString__get_CaseSensitive_fn(WhileString* __this, bool* __retval);
void WhileString__set_CaseSensitive_fn(WhileString* __this, bool* value);
void WhileString__get_Compare_fn(WhileString* __this, uString** __retval);
void WhileString__set_Compare_fn(WhileString* __this, uString* value);
void WhileString__get_IsOn_fn(WhileString* __this, bool* __retval);
void WhileString__get_MaxLength_fn(WhileString* __this, int32_t* __retval);
void WhileString__set_MaxLength_fn(WhileString* __this, int32_t* value);
void WhileString__get_MinLength_fn(WhileString* __this, int32_t* __retval);
void WhileString__set_MinLength_fn(WhileString* __this, int32_t* value);
void WhileString__get_Test_fn(WhileString* __this, int32_t* __retval);
void WhileString__set_Test_fn(WhileString* __this, int32_t* value);

struct WhileString : ::g::Fuse::Triggers::WhileValue
{
    int32_t _test;
    uStrong<uString*> _compare;
    bool _caseSensitive;
    int32_t _minLength;
    int32_t _maxLength;
    bool _hasMinLength;
    bool _hasMaxLength;

    bool CaseSensitive();
    void CaseSensitive(bool value);
    uString* Compare();
    void Compare(uString* value);
    int32_t MaxLength();
    void MaxLength(int32_t value);
    int32_t MinLength();
    void MinLength(int32_t value);
    int32_t Test();
    void Test(int32_t value);
};
// }

}}} // ::g::Fuse::Triggers
