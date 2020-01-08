// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/Input/Keyboard.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct KeyEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class KeyEventArgs :8
// {
::g::Fuse::VisualEventArgs_type* KeyEventArgs_typeof();
void KeyEventArgs__ctor_2_fn(KeyEventArgs* __this, int32_t* key, ::g::Fuse::Visual* visual);
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int32_t* __retval);
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int32_t* value);

struct KeyEventArgs : ::g::Fuse::VisualEventArgs
{
    bool _IsAltKeyPressed;
    bool _IsControlKeyPressed;
    bool _IsMetaKeyPressed;
    bool _IsShiftKeyPressed;
    int32_t _Key;

    void ctor_2(int32_t key, ::g::Fuse::Visual* visual);
    bool IsAltKeyPressed();
    void IsAltKeyPressed(bool value);
    bool IsControlKeyPressed();
    void IsControlKeyPressed(bool value);
    bool IsMetaKeyPressed();
    void IsMetaKeyPressed(bool value);
    bool IsShiftKeyPressed();
    void IsShiftKeyPressed(bool value);
    int32_t Key();
    void Key(int32_t value);
};
// }

}}} // ::g::Fuse::Input
