// This file was generated based on /Users/artnavsegda/Downloads/inbox/.uno/ux15/Inbox.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Icon.h>
#include <_root.Inbox.h>
#include <_root.Inbox.Template.h>
#include <_root.Inbox_bundle.h>
#include <_root.Inbox_FuseControlsTextControl_Value_Property.h>
#include <_root.Inbox_FuseDrawingImageFill_File_Property.h>
#include <_root.Inbox_FuseDrawingSolidColor_Color_Property.h>
#include <_root.Inbox_FuseElementsElement_Opacity_Property.h>
#include <_root.Operation.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Swiped.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[20];
static uType* TYPES[8];

namespace g{

// public partial sealed class Inbox.Template :5
// {
// static Template() :33
static void Inbox__Template__cctor__fn(uType* __type)
{
    Inbox__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Opacity"*/]);
    Inbox__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Color"*/]);
    Inbox__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"File"*/]);
    Inbox__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Value"*/]);
    Inbox__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"swipeRight"*/]);
    Inbox__Template::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"swipeLeft"*/]);
    Inbox__Template::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"contents"*/]);
    Inbox__Template::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"doneText"*/]);
    Inbox__Template::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"postponeText"*/]);
    Inbox__Template::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"checkmarkIcon"*/]);
    Inbox__Template::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"postponeIcon"*/]);
}

static void Inbox__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Opacity");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("File");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("swipeRight");
    ::STRINGS[5] = uString::Const("swipeLeft");
    ::STRINGS[6] = uString::Const("contents");
    ::STRINGS[7] = uString::Const("doneText");
    ::STRINGS[8] = uString::Const("postponeText");
    ::STRINGS[9] = uString::Const("checkmarkIcon");
    ::STRINGS[10] = uString::Const("postponeIcon");
    ::STRINGS[11] = uString::Const("removeItem");
    ::STRINGS[12] = uString::Const("postponeItem");
    ::STRINGS[13] = uString::Const("icon");
    ::STRINGS[14] = uString::Const("subject");
    ::STRINGS[15] = uString::Const("sender");
    ::STRINGS[16] = uString::Const("summary");
    ::STRINGS[17] = uString::Const("Inbox.ux");
    ::STRINGS[18] = uString::Const("Done");
    ::STRINGS[19] = uString::Const("Postponed");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Inbox_typeof(),
        ::g::Inbox_bundle_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetFields(2,
        ::g::Inbox_typeof(), offsetof(Inbox__Template, __parent1), uFieldFlagsWeak,
        ::g::Inbox_typeof(), offsetof(Inbox__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Inbox__Template, postponeText_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Inbox__Template, doneText_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Inbox__Template, postponeIcon_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(Inbox__Template, checkmarkIcon_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Inbox__Template, background_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(Inbox__Template, temp_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Inbox__Template, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Inbox__Template, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Inbox__Template, temp3_Value_inst), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(Inbox__Template, swipeRight), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(Inbox__Template, swipeLeft), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Inbox__Template, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Inbox__Template, temp_eb1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(Inbox__Template, contents), 0,
        ::g::Operation_typeof(), offsetof(Inbox__Template, doneText), 0,
        ::g::Operation_typeof(), offsetof(Inbox__Template, postponeText), 0,
        ::g::Icon_typeof(), offsetof(Inbox__Template, checkmarkIcon), 0,
        ::g::Icon_typeof(), offsetof(Inbox__Template, postponeIcon), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(Inbox__Template, background), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Inbox__Template::__selector10_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* Inbox__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 34;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(Inbox__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Inbox.Template", options);
    type->fp_build_ = Inbox__Template_build;
    type->fp_cctor_ = Inbox__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Inbox__Template__New1_fn;
    return type;
}

// public Template(Inbox parent, Inbox parentInstance) :9
void Inbox__Template__ctor_1_fn(Inbox__Template* __this, ::g::Inbox* parent, ::g::Inbox* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :36
void Inbox__Template__New1_fn(Inbox__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    __this->swipeRight = ::g::Fuse::Gestures::SwipeGesture::New2();
    __this->postponeText = ::g::Operation::New4();
    __this->postponeText_Opacity_inst = ::g::Inbox_FuseElementsElement_Opacity_Property::New1(__this->postponeText, Inbox__Template::__selector0_);
    __this->doneText = ::g::Operation::New4();
    __this->doneText_Opacity_inst = ::g::Inbox_FuseElementsElement_Opacity_Property::New1(__this->doneText, Inbox__Template::__selector0_);
    __this->postponeIcon = ::g::Icon::New4();
    __this->postponeIcon_Opacity_inst = ::g::Inbox_FuseElementsElement_Opacity_Property::New1(__this->postponeIcon, Inbox__Template::__selector0_);
    __this->checkmarkIcon = ::g::Icon::New4();
    __this->checkmarkIcon_Opacity_inst = ::g::Inbox_FuseElementsElement_Opacity_Property::New1(__this->checkmarkIcon, Inbox__Template::__selector0_);
    __this->background = ::g::Fuse::Drawing::SolidColor::New2();
    __this->background_Color_inst = ::g::Inbox_FuseDrawingSolidColor_Color_Property::New1(__this->background, Inbox__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"removeItem"*/]);
    __this->swipeLeft = ::g::Fuse::Gestures::SwipeGesture::New2();
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"postponeItem"*/]);
    ::g::Fuse::Drawing::ImageFill* temp = ::g::Fuse::Drawing::ImageFill::New2();
    __this->temp_File_inst = ::g::Inbox_FuseDrawingImageFill_File_Property::New1(temp, Inbox__Template::__selector2_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"icon"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::Inbox_FuseControlsTextControl_Value_Property::New1(temp1, Inbox__Template::__selector3_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"subject"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::Inbox_FuseControlsTextControl_Value_Property::New1(temp2, Inbox__Template::__selector3_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"sender"*/]);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    __this->temp3_Value_inst = ::g::Inbox_FuseControlsTextControl_Value_Property::New1(temp3, Inbox__Template::__selector3_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"summary"*/]);
    ::g::Fuse::Gestures::SwipingAnimation* temp10 = ::g::Fuse::Gestures::SwipingAnimation::New2(__this->swipeRight);
    ::g::Fuse::Triggers::Actions::Set* temp11 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<float>*/], __this->postponeText_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp12 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<float>*/], __this->doneText_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp13 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<float>*/], __this->postponeIcon_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp14 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<float>*/], __this->checkmarkIcon_Opacity_inst);
    ::g::Fuse::Animations::Change* temp15 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], __this->background_Color_inst);
    ::g::Fuse::Animations::Scale* temp16 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Swiped* temp17 = ::g::Fuse::Gestures::Swiped::New2(__this->swipeRight);
    ::g::Fuse::Triggers::Actions::Callback* temp18 = ::g::Fuse::Triggers::Actions::Callback::New2();
    __this->temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Gestures::SwipingAnimation* temp19 = ::g::Fuse::Gestures::SwipingAnimation::New2(__this->swipeLeft);
    ::g::Fuse::Triggers::Actions::Set* temp20 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<float>*/], __this->postponeText_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp21 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<float>*/], __this->doneText_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp22 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<float>*/], __this->checkmarkIcon_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp23 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<float>*/], __this->postponeIcon_Opacity_inst);
    ::g::Fuse::Animations::Change* temp24 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], __this->background_Color_inst);
    ::g::Fuse::Animations::Scale* temp25 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Swiped* temp26 = ::g::Fuse::Gestures::Swiped::New2(__this->swipeLeft);
    ::g::Fuse::Triggers::Actions::Callback* temp27 = ::g::Fuse::Triggers::Actions::Callback::New2();
    __this->temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    __this->contents = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::SwipingAnimation* temp28 = ::g::Fuse::Gestures::SwipingAnimation::New2(__this->swipeRight);
    ::g::Fuse::Animations::Move* temp29 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Gestures::SwipingAnimation* temp30 = ::g::Fuse::Gestures::SwipingAnimation::New2(__this->swipeLeft);
    ::g::Fuse::Animations::Move* temp31 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp32 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Circle* temp33 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_File_inst, (uObject*)temp6, 3);
    ::g::Fuse::Controls::StackPanel* temp35 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp36 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp3_Value_inst, (uObject*)temp9, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp39 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Triggers::RemovingAnimation* temp41 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Move* temp42 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::LayoutAnimation* temp43 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp44 = ::g::Fuse::Animations::Move::New2();
    __self1->SourceLineNumber(25);
    __self1->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->swipeRight)->Type(1);
    uPtr(__this->swipeRight)->Direction(2);
    uPtr(__this->swipeRight)->Name(Inbox__Template::__selector4_);
    uPtr(__this->swipeRight)->SourceLineNumber(27);
    uPtr(__this->swipeRight)->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->swipeRight)->LengthNode(uPtr(__this->__parent1)->appDock);
    uPtr(__this->swipeLeft)->Type(1);
    uPtr(__this->swipeLeft)->Direction(0);
    uPtr(__this->swipeLeft)->Name(Inbox__Template::__selector5_);
    uPtr(__this->swipeLeft)->SourceLineNumber(28);
    uPtr(__this->swipeLeft)->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->swipeLeft)->LengthNode(uPtr(__this->__parent1)->appDock);
    temp10->SourceLineNumber(31);
    temp10->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp11, uCRef(0.0f));
    temp11->SourceLineNumber(32);
    temp11->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp12, uCRef(1.0f));
    temp12->SourceLineNumber(33);
    temp12->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp13, uCRef(0.0f));
    temp13->SourceLineNumber(34);
    temp13->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp14, uCRef(1.0f));
    temp14->SourceLineNumber(35);
    temp14->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Animations::Change__set_Value_fn(temp15, uCRef(::g::Uno::Float4__New2(0.0f, 0.3333333f, 0.0f, 1.0f)));
    temp15->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp16->Factor(2.8f);
    temp16->Target(__this->checkmarkIcon);
    temp16->Easing(::g::Fuse::Animations::Easing::BackOut());
    temp17->SourceLineNumber(39);
    temp17->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb0);
    temp18->SourceLineNumber(40);
    temp18->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp18->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb0)));
    temp4->SourceLineNumber(40);
    temp4->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp19->SourceLineNumber(44);
    temp19->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp23);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp20, uCRef(1.0f));
    temp20->SourceLineNumber(45);
    temp20->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp21, uCRef(0.0f));
    temp21->SourceLineNumber(46);
    temp21->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp22, uCRef(0.0f));
    temp22->SourceLineNumber(47);
    temp22->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp23, uCRef(1.0f));
    temp23->SourceLineNumber(48);
    temp23->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Animations::Change__set_Value_fn(temp24, uCRef(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.0f, 1.0f)));
    temp24->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp25->Factor(2.8f);
    temp25->Target(__this->postponeIcon);
    temp25->Easing(::g::Fuse::Animations::Easing::BackOut());
    temp26->SourceLineNumber(52);
    temp26->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb1);
    temp27->SourceLineNumber(53);
    temp27->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp27->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb1)));
    temp5->SourceLineNumber(53);
    temp5->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->contents)->Name(Inbox__Template::__selector6_);
    uPtr(__this->contents)->SourceLineNumber(56);
    uPtr(__this->contents)->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->contents)->Background(temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->contents)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->contents)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->contents)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp28->SourceLineNumber(57);
    temp28->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    temp29->X(1.0f);
    temp29->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp30->SourceLineNumber(60);
    temp30->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp31);
    temp31->X(-1.0f);
    temp31->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp32->Margin(::g::Uno::Float4__New2(7.0f, 1.0f, 7.0f, 0.0f));
    temp32->SourceLineNumber(63);
    temp32->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    temp33->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp33->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp33->Alignment(5);
    temp33->Margin(::g::Uno::Float4__New2(7.0f, 7.0f, 0.0f, 7.0f));
    temp33->SourceLineNumber(64);
    temp33->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp33, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Fills()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp6->SourceLineNumber(65);
    temp6->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp35->Margin(::g::Uno::Float4__New2(7.0f, 3.0f, 7.0f, 7.0f));
    temp35->SourceLineNumber(67);
    temp35->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp1->FontSize(16.0f);
    temp1->SourceLineNumber(68);
    temp1->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp1->Font(::g::Inbox::Regular());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    temp7->SourceLineNumber(68);
    temp7->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp2->FontSize(16.0f);
    temp2->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->SourceLineNumber(69);
    temp2->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp2->Font(::g::Inbox::Regular());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp8->SourceLineNumber(69);
    temp8->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp3->TextWrapping(1);
    temp3->FontSize(14.0f);
    temp3->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->SourceLineNumber(70);
    temp3->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    temp3->Font(::g::Inbox::Light());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp9->SourceLineNumber(70);
    temp9->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->doneText)->Value(::STRINGS[18/*"Done"*/]);
    uPtr(__this->doneText)->Name(Inbox__Template::__selector7_);
    uPtr(__this->doneText)->SourceLineNumber(79);
    uPtr(__this->doneText)->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->postponeText)->Value(::STRINGS[19/*"Postponed"*/]);
    uPtr(__this->postponeText)->Name(Inbox__Template::__selector8_);
    uPtr(__this->postponeText)->SourceLineNumber(80);
    uPtr(__this->postponeText)->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->checkmarkIcon)->Alignment(9);
    uPtr(__this->checkmarkIcon)->Name(Inbox__Template::__selector9_);
    uPtr(__this->checkmarkIcon)->SourceLineNumber(82);
    uPtr(__this->checkmarkIcon)->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->checkmarkIcon)->File(::g::Uno::UX::BundleFileSource::New1(::g::Inbox_bundle::Checkmark3b525575()));
    uPtr(__this->postponeIcon)->Alignment(11);
    uPtr(__this->postponeIcon)->Name(Inbox__Template::__selector10_);
    uPtr(__this->postponeIcon)->SourceLineNumber(84);
    uPtr(__this->postponeIcon)->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    uPtr(__this->postponeIcon)->File(::g::Uno::UX::BundleFileSource::New1(::g::Inbox_bundle::Postpone3cb95d96()));
    temp40->SourceLineNumber(88);
    temp40->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Fills()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), __this->background);
    uPtr(__this->background)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp41->SourceLineNumber(93);
    temp41->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp42);
    temp42->Y(-1.0f);
    temp42->Duration(0.4);
    temp42->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp42->Easing(::g::Fuse::Animations::Easing::CircularInOut());
    temp43->SourceLineNumber(97);
    temp43->SourceFileName(::STRINGS[17/*"Inbox.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp44);
    temp44->Y(1.0f);
    temp44->Duration(0.8);
    temp44->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange());
    temp44->Easing(::g::Fuse::Animations::Easing::CircularInOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->swipeRight);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->swipeLeft);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->contents);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->doneText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->postponeText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->checkmarkIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->postponeIcon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    return *__retval = __self1, void();
}

// public Template New(Inbox parent, Inbox parentInstance) :9
void Inbox__Template__New2_fn(::g::Inbox* parent, ::g::Inbox* parentInstance, Inbox__Template** __retval)
{
    *__retval = Inbox__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector Inbox__Template::__selector0_;
::g::Uno::UX::Selector Inbox__Template::__selector1_;
::g::Uno::UX::Selector Inbox__Template::__selector2_;
::g::Uno::UX::Selector Inbox__Template::__selector3_;
::g::Uno::UX::Selector Inbox__Template::__selector4_;
::g::Uno::UX::Selector Inbox__Template::__selector5_;
::g::Uno::UX::Selector Inbox__Template::__selector6_;
::g::Uno::UX::Selector Inbox__Template::__selector7_;
::g::Uno::UX::Selector Inbox__Template::__selector8_;
::g::Uno::UX::Selector Inbox__Template::__selector9_;
::g::Uno::UX::Selector Inbox__Template::__selector10_;

// public Template(Inbox parent, Inbox parentInstance) [instance] :9
void Inbox__Template::ctor_1(::g::Inbox* parent, ::g::Inbox* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Inbox parent, Inbox parentInstance) [static] :9
Inbox__Template* Inbox__Template::New2(::g::Inbox* parent, ::g::Inbox* parentInstance)
{
    Inbox__Template* obj1 = (Inbox__Template*)uNew(Inbox__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
