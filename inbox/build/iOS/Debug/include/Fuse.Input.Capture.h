// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/Input/Pointer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Capture;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class Capture :49
// {
uType* Capture_typeof();
void Capture__ctor__fn(Capture* __this, ::g::Fuse::Visual* n, uObject* identity);
void Capture__AcceptsPoint_fn(Capture* __this, int32_t* index, bool* __retval);
void Capture__CompareStrength_fn(Capture* __this, Capture* o, int32_t* __retval);
void Capture__get_Identity_fn(Capture* __this, uObject** __retval);
void Capture__set_Identity_fn(Capture* __this, uObject* value);
void Capture__get_IsSuitable_fn(Capture* __this, bool* __retval);
void Capture__New1_fn(::g::Fuse::Visual* n, uObject* identity, Capture** __retval);
void Capture__get_Visual_fn(Capture* __this, ::g::Fuse::Visual** __retval);
void Capture__set_Visual_fn(Capture* __this, ::g::Fuse::Visual* value);

struct Capture : uObject
{
    int32_t VisualDepth;
    uStrong<uDelegate*> LostCallback;
    int32_t Type;
    bool Deleted;
    uStrong< ::g::Uno::Collections::List*> PointIndex;
    uStrong<uObject*> _Identity;
    uStrong< ::g::Fuse::Visual*> _Visual;

    void ctor_(::g::Fuse::Visual* n, uObject* identity);
    bool AcceptsPoint(int32_t index);
    int32_t CompareStrength(Capture* o);
    uObject* Identity();
    void Identity(uObject* value);
    bool IsSuitable();
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static Capture* New1(::g::Fuse::Visual* n, uObject* identity);
};
// }

}}} // ::g::Fuse::Input
