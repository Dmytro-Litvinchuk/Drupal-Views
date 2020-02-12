<?php

namespace Drupal\custom_views\Plugin\views\filter;


use Drupal\Core\Entity\Query\Sql\Condition;
use Drupal\Core\Form\FormStateInterface;
use Drupal\views\Plugin\views\filter\FilterPluginBase;

/**
 * Simple filter to handle filtering by gender.
 *
 * @ViewsFilter("custom_views_gender")
 */
class UserGender extends FilterPluginBase {
  /** change default operator
  public function defineOptions() {
    $options = parent::defineOptions();
    $options['operator'] = [
      'default' => '<>',
    ];
    return $options;
  }
   */

  /**
   * @inheritDoc
   */
  protected function valueForm(&$form, FormStateInterface $form_state) {
    $form['value'] = [
      '#type' => 'select',
      '#title' => $this->t('Gender'),
      '#options' => [
        'mr' => $this->t('male'),
        'ms' => $this->t('female'),
      ],
      '#default_value' => $this->value,
    ];
  }

  /**
  // Work only if you select it from views.
  public function query() {
    $this->ensureMyTable();
    if ($this->value == 'mr') {
      $this->query->addWhere($this->options['group'], "$this->tableAlias.$this->realField", $this->value, $this->operator);
    } elseif ($this->value == 'ms') {
      $this->query->addWhere($this->options['group'], "$this->tableAlias.$this->realField", 'mr', '<>');
    }
  }
   */

}
