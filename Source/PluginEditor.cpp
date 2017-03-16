/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
NonLinearAudioProcessorEditor::NonLinearAudioProcessorEditor (NonLinearAudioProcessor& p)
    : AudioProcessorEditor(p), processor(p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (driveSlider = new Slider ("Drive Slider"));
    driveSlider->setRange (0, 4, 0);
    driveSlider->setSliderStyle (Slider::LinearHorizontal);
    driveSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    driveSlider->addListener (this);

    addAndMakeVisible (driveLabel = new Label ("Drive Label",
                                               TRANS("Drive\n")));
    driveLabel->setFont (Font (15.00f, Font::plain));
    driveLabel->setJustificationType (Justification::centredLeft);
    driveLabel->setEditable (false, false, false);
    driveLabel->setColour (TextEditor::textColourId, Colours::black);
    driveLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (testParam = new Slider ("Test Param"));
    testParam->setRange (0, 1, 0);
    testParam->setSliderStyle (Slider::LinearHorizontal);
    testParam->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    testParam->addListener (this);

    addAndMakeVisible (testParamLabel = new Label ("Test Param Label",
                                                   TRANS("Test Param Between 0 and 1")));
    testParamLabel->setFont (Font (15.00f, Font::plain));
    testParamLabel->setJustificationType (Justification::centredLeft);
    testParamLabel->setEditable (false, false, false);
    testParamLabel->setColour (TextEditor::textColourId, Colours::black);
    testParamLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    startTimer(200);
    //[/Constructor]
}

NonLinearAudioProcessorEditor::~NonLinearAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    driveSlider = nullptr;
    driveLabel = nullptr;
    testParam = nullptr;
    testParamLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void NonLinearAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void NonLinearAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    driveSlider->setBounds (40, 104, 150, 24);
    driveLabel->setBounds (40, 72, 150, 24);
    testParam->setBounds (40, 184, 150, 24);
    testParamLabel->setBounds (40, 152, 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void NonLinearAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == driveSlider)
    {
        //[UserSliderCode_driveSlider] -- add your slider handling code here..
        processor.drive = sliderThatWasMoved->getValue();

        //[/UserSliderCode_driveSlider]
    }
    else if (sliderThatWasMoved == testParam)
    {
        //[UserSliderCode_testParam] -- add your slider handling code here..
        processor.testParam = sliderThatWasMoved->getValue();
        
        //[/UserSliderCode_testParam]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void NonLinearAudioProcessorEditor::timerCallback()
{
    //exchange any data you want between UI elements and the Plugin "ourProcessor"
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="NonLinearAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="NonLinearAudioProcessor&amp; p" variableInitialisers="AudioProcessorEditor(p), processor(p)&#10;"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <SLIDER name="Drive Slider" id="cd1e7aac30dd2450" memberName="driveSlider"
          virtualName="" explicitFocusOrder="0" pos="40 104 150 24" min="0"
          max="4" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="Drive Label" id="8da7aa3b5dc5fc4f" memberName="driveLabel"
         virtualName="" explicitFocusOrder="0" pos="40 72 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Drive&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Test Param" id="42db539c5c9b55bd" memberName="testParam"
          virtualName="" explicitFocusOrder="0" pos="40 184 150 24" min="0"
          max="1" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="Test Param Label" id="d7e390049ec09864" memberName="testParamLabel"
         virtualName="" explicitFocusOrder="0" pos="40 152 150 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Test Param Between 0 and 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
