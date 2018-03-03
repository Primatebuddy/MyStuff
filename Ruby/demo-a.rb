require 'ray'

class TitleScene < Ray::Scene
  scene_name :title

  def setup
    # setup resources
  end

  def register
    # register for events
  end

  def render(win)
    # draw!
  end

  def clean_up
    # perform cleanup
  end
end

class GameScene < Ray::Scene
  scene_name :game

  # same stuff
end

# ...

class Game < Ray::Game
  def initialize
    super "Awesome Game"

    TitleScene.bind(self)
    GameScene.bind(self)
    # ...

    scenes << :title
  end
end
