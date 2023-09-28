#include "Headers.h"


AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor& p, StateManager& stateManager)
    : AudioProcessorEditor (&p), processorRef (p), m_stateManager (stateManager)
{
    juce::ignoreUnused (processorRef);
    setSize (1000, 800);
    startTimerHz (60);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() {}

void AudioPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::black);
}

void AudioPluginAudioProcessorEditor::resized() {}

void AudioPluginAudioProcessorEditor::timerCallback()
{
    repaint();
}

void AudioPluginAudioProcessorEditor::mouseDown (const juce::MouseEvent &event)
{
    auto numClicks = event.getNumberOfClicks();
    auto position = event.getMouseDownPosition();
    
    if (numClicks == 2)
    {
        addEffectNode (position);
    }
}

void AudioPluginAudioProcessorEditor::addEffectNode(juce::Point<int> position)
{
    m_stateManager.addEffectNode (position);
}
