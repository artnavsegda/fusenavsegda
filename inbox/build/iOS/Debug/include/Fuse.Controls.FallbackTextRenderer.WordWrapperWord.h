// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/WordWrapper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapperWord;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class WordWrapperWord :6
// {
uType* WordWrapperWord_typeof();
void WordWrapperWord__ctor__fn(WordWrapperWord* __this, uString* contents, uString* whitespace, int32_t* startIndex, float* contentsWidth, float* totalContentsWidth);
void WordWrapperWord__New1_fn(uString* contents, uString* whitespace, int32_t* startIndex, float* contentsWidth, float* totalContentsWidth, WordWrapperWord** __retval);

struct WordWrapperWord : uObject
{
    uStrong<uString*> Contents;
    uStrong<uString*> Whitespace;
    uStrong<uString*> TotalContents;
    int32_t StartIndex;
    float ContentsWidth;
    float TotalContentsWidth;

    void ctor_(uString* contents, uString* whitespace, int32_t startIndex, float contentsWidth, float totalContentsWidth);
    static WordWrapperWord* New1(uString* contents, uString* whitespace, int32_t startIndex, float contentsWidth, float totalContentsWidth);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
