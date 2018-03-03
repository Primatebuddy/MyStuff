require 'ray'

Ray.game "Hello" do
  register { add_hook :quit, method(:exit!) }

  scene :hello do
    @text = text "Hello world!", :size => 30, :angle => 30, :at => [50, 50]
    render { |win| win.draw @text }
  end

  scenes << :hello
end
