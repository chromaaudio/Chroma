#pragma once


//==============================================================================
/**
*/
class ChromaPitchAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    ChromaPitchAudioProcessorEditor (ChromaPitchAudioProcessor&);
    ~ChromaPitchAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    ChromaPitchAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ChromaPitchAudioProcessorEditor)
};